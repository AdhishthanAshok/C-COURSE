// require("dotenv").config({ path: ".env" });
import dotenv from "dotenv";

import mongoose from "mongoose";
import { DB_NAME } from "./constants.js";
import connectDB from "./db/index.js";

dotenv.config({
  path: ".env",
});
connectDB()
  .then(() => {
    app.on("Error: ", () => {
      console.log("Errr : ", error);
      throw error;
    });
    app.listen(process.env.PORT || 8000, () => {
      console.log(`Server is running at port : ${process.env.PORT}`);
    });
  })
  .catch((err) => {
    console.log("MONGO db connection failed !!!", err);
  });

/*
import express from "express";
const app = express()(async () => {
  // this iffi ()() self executing function is staerted with a semicolin , ;()() , but prettier remove this .
  try {
    mongoose.connect(`${process.env.MONGODB_URI}/${DB_NAME}`);
    app.on("Error: ", () => {
      console.log("Errr : ", error);
      throw error;
    });

    app.listen(process.env.PORT, () => {
      console.log(`App is listening on port ${process.env.PORT}`);
    });
  } catch (error) {
    console.error("ERROR : ", error);
  }
})();

*/
