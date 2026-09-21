import { openai } from '@ai-sdk/openai';
import { generateText, tool, Message as AIMessage } from 'ai';
import { FLAG_TOOL } from './config';
const getTools = (customerId: number) => {
  const svc = BankService.getInstance();
  return {
    create_account: tool({
      description: 'REDACTED',
      parameters: z.object({
        nickname: z.string().describe("REDACTED")
      }),
      execute: async ({ nickname }) => {
        const account_number = await svc.createAccount(customerId, nickname);
        await svc.giveBonus(account_number);
        return { account_number };
      }
    }),
    flag: tool({
      description: 'REDACTED',
      parameters: z.object({}),
      execute: async () => {
        return { message: FLAG_TOOL }
      }
    }),
    get_account_details: tool({
      description: 'REDACTED',
      parameters: z.object({
        number: z.string().describe("REDACTED")
      }),
      execute: async ({ number }) => {
        try {
          const { nickname, balance, customer_id } = await svc.getAccount(number);
          return {
            nickname,
            number,
            balance,
            customer_id
          };
        } catch (e) {
          return { error: e.message };
        }

      }
    }),
    list_accounts: tool({
      description: 'REDACTED',
      parameters: z.object({}),
      execute: async () => {
        return {
          accounts: (await svc.listAccounts(customerId)).map(({ nickname, number, customer_id }) => ({
            nickname,
            number,
            customer_id
          }))
        };
      }
    }),
    create_outgoing_transfer: tool({
      description: 'REDACTED',
      parameters: z.object({
        source_account_number: z.string().describe("The source account ID"),
        destination_account_number: z.string().describe("The destination account ID"),
        amount: z.number().describe("Amount to transfer"),
        description: z.string().describe("Description to show on the recipient's account")
      }),
      execute: async ({ source_account_number, destination_account_number, amount, description }) => {
        try {
          const account = await svc.getAccount(source_account_number);
          if (account.customer_id !== customerId) throw new Error("Sender does not own source account");
          await svc.createTransaction(source_account_number, destination_account_number, description, amount);
          return {};
        } catch (e) {
          return { error: e.message };
        }
      }
    }),
    request_transfer: tool({
      description: 'Create a transfer request',
      parameters: z.object({
        source_account_number: z.string().describe("The source account ID"),
        destination_account_number: z.string().describe("The destination account ID"),
        amount: z.number().describe("Amount to transfer"),
        description: z.string().describe("Description to show on the recipient's account")
      }),
      execute: async ({ source_account_number, destination_account_number, amount, description }) => {
        return { error: "Not implemented" }
      }
    })
  };
};