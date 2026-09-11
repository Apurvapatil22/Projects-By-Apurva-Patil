student = [
    {"roll":58 ,"name":"apurva", "marks":95,"city":"kolad"},
    {"roll":66,"name":"tanuja","marks":90,"city":"dombivali"}
]

with open("my_notes.txt", "w") as f:
    for s in student:
        f.write(f"{s['roll']} - {s['name']} - {s['marks']} - {s['city']}\n")

print("file is save")
