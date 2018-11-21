import smtplib
from email.mime.text import MIMEText

body="hey there buddy"

msg=MIMEText(body)

fromaddr="sanchitkhare3@gmail.com"

toaddr="abhinavsinghjadaun@gmail.com"

msg["From"]=fromaddr
msg["To"]=toaddr
msg["Subject"]="Hey there dickhead"

server=smtplib.SMTP("smtp.gmail.com",587)

server.starttls()
server.login(fromaddr,"s@nchit13")

server.send_message(msg)
print("Mail Sent.....")

server.quit()
