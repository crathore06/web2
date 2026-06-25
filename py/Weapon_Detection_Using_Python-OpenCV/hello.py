import cv2
face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
)

camera = cv2.VideoCapture(0)

while True:

    ret, frame = camera.read()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    gun = gun_cascade.detectMultiScale(gray, 
                                            scaleFactor=1.3,
                                            minNeighbors=5,
                                            minSize=(100,100)
                                            )

    if len(gun) > 0:
        gun_exist = True

    for (x, y, w, h) in gun:
        frame = cv2.rectangle(frame, 
                              (x,y), 
                              (x + w, y + h), 
                              (255,0,0), 2)
        roi_gray = gray[y : y + h, x : x + w]
        roi_color = frame[y : y + h, x : x + w]

    if firstFrame is None:
        firstFrame = gray
        continue


    cv2.imshow("Security feed", frame)
    key = cv2.waitKey(1) & 0xFF

    if key == ord('q'):
        break

if gun_exist:
    print("guns detected")

if gun_cascade.empty():
    print("Cascade file load nahi hui! ")
    exit()

else:
    print("guns didn't detected")

camera.release()
cv2.destroyAllWindows()


