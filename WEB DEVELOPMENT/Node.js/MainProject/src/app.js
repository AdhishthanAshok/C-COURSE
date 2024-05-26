import express, { Router } from "express";
import cors from "cors";
import cookieparser from "cookie-parser";

const app = express();

app.use(
  cors({
    origin: process.env.CORS_ORIGIN,
    credentials: true,
  })
);

app.use(
  express.json({
    // it will limit the JSON data , because we didn't want our server to crash
    limit: "16kb",
  })
);

app.use(
  express.urlencoded({
    // urlencoded will encode the URL because some url , put %20 for spaces and some put '+' sign
    extended: true,
    limit: "16kb",
  })
);

app.use(express.static("public"));

app.use(cookieparser());

import  userRouter  from "./routes/user.routes.js";

app.use("/api/v1/users", userRouter);

export { app };
