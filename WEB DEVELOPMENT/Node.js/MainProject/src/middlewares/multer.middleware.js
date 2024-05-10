import multer from "multer";

const storage = multer.diskStorage({
  destination: function (req, file, cb) {
    cb(null, "./public/temp");
  },
  filename: function (req, file, cb) {
    cb(null, file.originalname); // originalname option is not that good , because it uploaded the file with the same name as the user gives
  },
});

export const upload = multer({
  storage,
});
 