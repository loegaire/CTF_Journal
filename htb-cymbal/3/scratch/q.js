async (page) => {
  const Q = globalThis.__Q;
  const fs = require('fs');
  let body = '';
  const h = async r => { if (r.url().includes(':streamSearch')) { try { body += await r.text(); } catch(e){} } };
  page.on('response', h);
  await page.goto('https://ctf-us-15.backstory.chronicle.security/search?query=' + encodeURIComponent(Q) + '&startTime=2024-01-01T00:00:00.000Z&endTime=2026-10-29T23:00:00.000Z&queryType=QUERY_TYPE_UDM_QUERY&tab=overview');
  for (let i = 0; i < 40 && !body; i++) await page.waitForTimeout(1000);
  await page.waitForTimeout(3000);
  page.off('response', h);
  fs.writeFileSync('/home/thinh/ctf/htb-cymbal/3/dumps/last.json', body);
  return body.length;
}
