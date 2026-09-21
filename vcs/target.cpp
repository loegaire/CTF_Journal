#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <tlhelp32.h>
#include <winternl.h>
#include <bcrypt.h>
#include <wincrypt.h>
#include <time.h>
#include <shlobj.h>
#include <psapi.h>

#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "crypt32.lib")

// Fake flags to mislead reverse engineers
const char* fake_flags[] = {
    "flag{debugger_detected}",
    "flag{easy_mode}",
    "flag{beginner_ctf}",
    "flag{try_harder}",
    "flag{not_this_one}"
};

// Multiple encrypted versions of the real flag
unsigned char encrypted_pass1[] = {
    0x3C, 0x36, 0x3B, 0x3D, 0x21, 0x3B, 0x34, 0x2E, 0x33, 0x05, 
    0x3E, 0x3F, 0x38, 0x2F, 0x3D, 0x05, 0x3E, 0x3F, 0x37, 0x35, 0x27
};

unsigned char encrypted_pass2[] = {
    0x1A, 0x0F, 0x1C, 0x1E, 0x08, 0x1C, 0x11, 0x05, 0x10, 0x1B,
    0x1D, 0x1E, 0x15, 0x14, 0x1E, 0x1B, 0x1D, 0x1E, 0x14, 0x12, 0x04
};

unsigned char encrypted_pass3[] = {
    0x7F, 0x79, 0x7A, 0x7C, 0x60, 0x7A, 0x75, 0x6B, 0x70, 0x7A,
    0x7D, 0x7E, 0x71, 0x6E, 0x7C, 0x7A, 0x7D, 0x7E, 0x74, 0x72, 0x64
};

// Custom encryption key
unsigned char custom_key[] = "SUPER_SECRET_KEY_2024";

// Anti-debugging and anti-analysis structures
typedef struct _DEBUGGER_CHECKS {
    BOOL is_debugger_present;
    BOOL is_attached;
    BOOL timing_anomaly;
    BOOL memory_modified;
    DWORD process_id;
    DWORD parent_pid;
} DEBUGGER_CHECKS;

// Function prototypes
BOOL AdvancedAntiDebugChecks(DEBUGGER_CHECKS* checks);
void PerformXORDecryption(unsigned char* input, unsigned char* output, int len, unsigned char key);
void PerformAESDecryption(unsigned char* input, unsigned char* output, int len);
void PerformCustomCipher(unsigned char* input, unsigned char* output, int len);
void MemoryProtection();
void CodeObfuscation();
void ValidateIntegrity();
void GenerateFakePath(char* buffer, int size);
void ConfuseReverseEngineers();

// Advanced anti-debugging checks
BOOL AdvancedAntiDebugChecks(DEBUGGER_CHECKS* checks) {
    checks->is_debugger_present = IsDebuggerPresent();
    
    // Check for parent process anomalies
    checks->parent_pid = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 pe32;
        pe32.dwSize = sizeof(PROCESSENTRY32);
        if (Process32First(snapshot, &pe32)) {
            do {
                if (pe32.th32ProcessID == GetCurrentProcessId()) {
                    checks->parent_pid = pe32.th32ParentProcessID;
                    break;
                }
            } while (Process32Next(snapshot, &pe32));
        }
        CloseHandle(snapshot);
    }
    
    // Timing-based detection
    LARGE_INTEGER freq, start, end;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&start);
    
    // Busy wait for detection
    for (volatile int i = 0; i < 1000000; i++);
    
    QueryPerformanceCounter(&end);
    double elapsed = (double)(end.QuadPart - start.QuadPart) / freq.QuadPart;
    checks->timing_anomaly = (elapsed > 0.1 || elapsed < 0.001);
    
    // Memory integrity check
    MEMORY_BASIC_INFORMATION mbi;
    VirtualQuery(AdvancedAntiDebugChecks, &mbi, sizeof(mbi));
    checks->memory_modified = (mbi.State != MEM_COMMIT);
    
    // Check for common debugger processes
    HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcess != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 pe32;
        pe32.dwSize = sizeof(PROCESSENTRY32);
        if (Process32First(hProcess, &pe32)) {
            do {
                char process_name[MAX_PATH];
                strcpy(process_name, pe32.szExeFile);
                
                // Check for common debuggers
                if (_stricmp(process_name, "ollydbg.exe") == 0 ||
                    _stricmp(process_name, "x64dbg.exe") == 0 ||
                    _stricmp(process_name, "idaq.exe") == 0 ||
                    _stricmp(process_name, "windbg.exe") == 0 ||
                    _stricmp(process_name, "gdb.exe") == 0) {
                    checks->is_attached = TRUE;
                    break;
                }
            } while (Process32Next(hProcess, &pe32));
        }
        CloseHandle(hProcess);
    }
    
    // Return TRUE if any anti-debug check fails
    return checks->is_debugger_present || checks->is_attached || 
           checks->timing_anomaly || checks->memory_modified;
}

// XOR decryption with multiple keys
void PerformXORDecryption(unsigned char* input, unsigned char* output, int len, unsigned char key) {
    for (int i = 0; i < len; i++) {
        output[i] = input[i] ^ key;
    }
    output[len] = '\0';
}

// AES decryption simulation (simplified for demo)
void PerformAESDecryption(unsigned char* input, unsigned char* output, int len) {
    // In a real implementation, this would use proper AES decryption
    // For demo purposes, we'll use a complex XOR pattern
    unsigned char aes_key[] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    for (int i = 0; i < len; i++) {
        output[i] = input[i] ^ aes_key[i % 8];
    }
    output[len] = '\0';
}

// Custom cipher implementation
void PerformCustomCipher(unsigned char* input, unsigned char* output, int len) {
    // Complex custom cipher with multiple operations
    for (int i = 0; i < len; i++) {
        output[i] = input[i];
        // Bit rotation
        output[i] = (output[i] << 2) | (output[i] >> 6);
        // Add key
        output[i] += custom_key[i % strlen((char*)custom_key)];
        // Final XOR
        output[i] ^= 0x55;
    }
    output[len] = '\0';
}

// Memory protection functions
void MemoryProtection() {
    // Mark executable memory as read-only
    DWORD old_protect;
    VirtualProtect(PerformXORDecryption, 4096, PAGE_READONLY, &old_protect);
    
    // Clear sensitive data from stack
    volatile unsigned char buffer[256];
    memset((void*)buffer, 0, sizeof(buffer));
}

// Code obfuscation through control flow flattening
void CodeObfuscation() {
    int control_flow = rand() % 5;
    
    switch (control_flow) {
        case 0:
            // Path 1
            if (1) {
                while (1) break;
            }
            break;
        case 1:
            // Path 2
            for (int i = 0; i < 1; i++) {
                if (i == 0) continue;
            }
            break;
        case 2:
            // Path 3
            do {
                if (0) break;
            } while (1);
            break;
        case 3:
            // Path 4
            goto label1;
        label1:
            if (0) goto label2;
            break;
        case 4:
            // Path 5
            if (1) {
                label2:;
            }
            break;
    }
}

// Runtime integrity validation
void ValidateIntegrity() {
    // Check if code has been modified
    unsigned char expected_hash[] = {0x12, 0x34, 0x56, 0x78};
    unsigned char actual_hash[4];
    
    // Simple hash check (in real implementation, use proper crypto)
    memcpy(actual_hash, expected_hash, 4);
    
    if (memcmp(actual_hash, expected_hash, 4) != 0) {
        ExitProcess(1);
    }
}

// Generate fake paths to confuse reverse engineers
void GenerateFakePath(char* buffer, int size) {
    char temp_path[MAX_PATH];
    GetTempPathA(MAX_PATH, temp_path);
    
    // Create confusing directory structure
    char fake_dir[MAX_PATH];
    sprintf(fake_dir, "%s\\fake_flag_%d", temp_path, rand() % 1000);
    CreateDirectoryA(fake_dir, NULL);
    
    // Write fake flags to mislead
    for (int i = 0; i < 5; i++) {
        char fake_file[MAX_PATH];
        sprintf(fake_file, "%s\\flag_%d.txt", fake_dir, i);
        HANDLE hFile = CreateFileA(fake_file, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, 0, NULL);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD written;
            WriteFile(hFile, fake_flags[i], strlen(fake_flags[i]), &written, NULL);
            CloseHandle(hFile);
        }
    }
    
    // Clean up after a delay
    Sleep(100);
    RemoveDirectoryA(fake_dir);
}

// Confuse reverse engineers with fake logic
void ConfuseReverseEngineers() {
    // Fake validation paths
    char fake_input[100];
    strcpy(fake_input, "flag{this_is_fake}");
    
    // Fake decryption
    char fake_output[100];
    PerformXORDecryption((unsigned char*)fake_input, (unsigned char*)fake_output, 
                        strlen(fake_input), 0x5A);
    
    // Fake comparison that always fails
    if (strcmp(fake_output, "real_flag") == 0) {
        // This will never execute
        printf("Fake success!\n");
    }
}

// Main decryption function with multiple layers
void DecryptString(char* out_buf) {
    // Validate integrity first
    ValidateIntegrity();
    
    // Layer 1: XOR decryption
    char temp1[100];
    PerformXORDecryption(encrypted_pass1, (unsigned char*)temp1, 
                        sizeof(encrypted_pass1) - 1, 0x5A);
    
    // Layer 2: AES decryption
    char temp2[100];
    PerformAESDecryption((unsigned char*)temp1, (unsigned char*)temp2, strlen(temp1));
    
    // Layer 3: Custom cipher
    PerformCustomCipher((unsigned char*)temp2, (unsigned char*)out_buf, strlen(temp2));
    
    // Final null terminator
    out_buf[strlen(out_buf)] = '\0';
}

int main() {
    // Initialize random seed
    srand((unsigned int)time(NULL));
    
    // Perform memory protection
    MemoryProtection();
    
    // Generate fake paths and files
    GenerateFakePath(NULL, 0);
    
    // Confuse reverse engineers
    ConfuseReverseEngineers();
    
    // Perform code obfuscation
    CodeObfuscation();
    
    printf("[*] ADVANCED CRACKME: ANTI-DEBUG PROTECTION\n\n");
    
    // Advanced anti-debug checks
    DEBUGGER_CHECKS checks;
    if (AdvancedAntiDebugChecks(&checks)) {
        printf("[-] CRITICAL SECURITY BREACH DETECTED!\n");
        printf("[-] Debugger: %s\n", checks.is_debugger_present ? "YES" : "NO");
        printf("[-] Attached: %s\n", checks.is_attached ? "YES" : "NO");
        printf("[-] Timing Anomaly: %s\n", checks.timing_anomaly ? "YES" : "NO");
        printf("[-] Memory Modified: %s\n", checks.memory_modified ? "YES" : "NO");
        printf("[-] Parent PID: %d\n", checks.parent_pid);
        
        // Exit with error code
        ExitProcess(1);
    }
    
    // Multiple validation layers
    char input[100];
    printf("[?] Enter flag to decrypt: ");
    scanf("%99s", input);
    
    // Try multiple decryption methods
    char real_pass1[100], real_pass2[100], real_pass3[100];
    
    DecryptString(real_pass1);
    PerformXORDecryption(encrypted_pass2, (unsigned char*)real_pass2, 
                        sizeof(encrypted_pass2) - 1, 0x5A);
    PerformCustomCipher(encrypted_pass3, (unsigned char*)real_pass3, 
                       sizeof(encrypted_pass3) - 1);
    
    // Check against all possible valid flags
    if (strcmp(input, real_pass1) == 0 || 
        strcmp(input, real_pass2) == 0 || 
        strcmp(input, real_pass3) == 0) {
        
        printf("\n[+] SUCCESS! Ransomware decrypted.\n");
        printf("[+] Flag validated successfully.\n");
        
        // Additional verification
        ValidateIntegrity();
        
    } else {
        printf("\n[-] INCORRECT!\n");
        printf("[-] Hint: The flag is encrypted with multiple layers.\n");
        printf("[-] Hint: Try different decryption approaches.\n");
        
        // Fake success to mislead
        if (strcmp(input, "flag{misleading}") == 0) {
            printf("[+] FAKE SUCCESS! You found a decoy flag.\n");
            printf("[-] The real flag is still encrypted.\n");
        }
    }
    
    // Clean up
    MemoryProtection();
    
    system("pause");
    return 0;
}

// Compilation command (for reference):
// x86_64-w64-mingw32-g++ target.cpp -o target.exe -O0 -static -Wl,--disable-dynamicbase -Wl,--disable-nxcompat -fno-stack-protector -fno-stack-check
