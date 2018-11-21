import mysql.connector
conn = mysql.connector.connect(host="localhost",database="new",user="root",password="")
cursor = conn.cursor()
cursor.execute("select*from person")

rows=cursor.fetchall()
print(cursor.rowcount)
for row in rows:
    print(row)

cursor.close()
conn.close()
