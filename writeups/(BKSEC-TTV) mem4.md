---
title: mem4

---


trước tiên, kiểm tra checksum
sau khi kiểm tra xong, nhận thấy file rất lớn, việc đầu tiên là thử với strings và grep: 
`strings memdump.mem | grep "BKSEC"`
cho ta vài flag(sau này sẽ dùng đến) và một nửa flag

* công cụ chính cho chall này sẽ là volatility

* trả lời danh sách các câu hỏi bằng các câu lệnh volatility liên quan đến các process, profile, time/date(+7 giờ để chỉnh về UTC +7) 

* sẽ có câu hỏi cần dùng đến flag đầu tiên thấy từ grep 

* "**process đáng nghi là svcost.exe**"

cuối cùng, trả lời câu hỏi về 2 flag, flag nửa đầu tiên ta đã tìm được, flag2 ở dưới dạng một file .exe 
trích thông tin từ đó, ta tìm được flag cuối cùng để giải chall này