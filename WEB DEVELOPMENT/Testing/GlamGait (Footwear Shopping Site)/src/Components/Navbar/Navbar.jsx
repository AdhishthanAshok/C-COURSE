import React, { useState } from "react";
import logo from "../assets/logo.jpg";
import profile_logo from "../assets/profile_icon.jpg";
import { Link } from "react-router-dom";

function Navbar() {
  const [menu, setMenu] = useState("shop");
  return (
    <div className="flex justify-between items-center py-1 px-4 lg:px-8">
      <div className="flex w-1/4 sm:w-1/5 md:w-1/6 lg:w-1/8 xl:w-1/10 items-center cursor-pointer">
        <img src={logo} alt="logo" className="h-10vh max-h-16" />
      </div>
      <div className="flex flex-col sm:flex-row sm:justify-end flex-grow sm:items-center">
        <ul className="flex flex-col sm:flex-row justify-center items-center gap-2 sm:gap-4 lg:gap-6">
          <li
            onClick={() => {
              setMenu("shop");
            }}
            className="cursor-pointer text-gray-800 transition-all ease-250"
          >
            <Link
              style={{ textDecoration: "none", color: "Black" }}
              to="/"
              className="text-gray-800"
            >
              Shop
            </Link>
            {menu === "shop" ? (
              <hr className="border-none bg-red-500 rounded w-4/5 h-0.5 mx-auto mt-1" />
            ) : (
              <></>
            )}
          </li>
          <li
            onClick={() => {
              setMenu("Men");
            }}
            className="cursor-pointer text-gray-800 transition-all ease-250"
          >
            <Link
              style={{ textDecoration: "none", color: "Black" }}
              to="/mens"
              className="text-gray-800"
            >
              Men
            </Link>
            {menu === "Men" ? (
              <hr className="border-none bg-red-500 rounded w-4/5 h-0.5 mx-auto mt-1" />
            ) : (
              <></>
            )}
          </li>
          <li
            onClick={() => {
              setMenu("Women");
            }}
            className="cursor-pointer text-gray-800 transition-all ease-250"
          >
            <Link
              style={{ textDecoration: "none", color: "Black" }}
              to="/womens"
              className="text-gray-800"
            >
              Women
            </Link>
            {menu === "Women" ? (
              <hr className="border-none bg-red-500 rounded w-4/5 h-0.5 mx-auto mt-1" />
            ) : (
              <></>
            )}
          </li>
          <li
            onClick={() => {
              setMenu("Kids");
            }}
            className="cursor-pointer text-gray-800 transition-all ease-250"
          >
            <Link
              style={{ textDecoration: "none", color: "Black" }}
              to="/kids"
              className="text-gray-800"
            >
              Kids
            </Link>
            {menu === "Kids" ? (
              <hr className="border-none bg-red-500 rounded w-4/5 h-0.5 mx-auto mt-1" />
            ) : (
              <></>
            )}
          </li>
        </ul>
      </div>
      <div className="flex items-center ml-4 lg:ml-8">
        <button
          className="border-none"
          onClick={() => {
            setMenu("Login");
          }}
        >
          <Link
            style={{ textDecoration: "none", color: "white" }}
            to="/login"
            className="bg-black text-white rounded w-20 h-10 text-base sm:text-lg lg:text-xl transition-all ease-in-250 hover:cursor-pointer focus:w-16 focus:bg-aqua focus:text-gray-800 focus:h-12 focus:rounded-full focus:mr-2"
          >
            <button className="bg-black text-white rounded w-20 h-10 text-base sm:text-lg lg:text-xl transition-all ease-in-250">
              Login
            </button>
          </Link>
        </button>
        <Link
          style={{ textDecoration: "none" }}
          to={"/profile"}
          className="ml-4 h-8 rounded-full border-gray-400 border cursor-pointer"
        >
          <img
            src={profile_logo}
            alt="profile"
            className="h-8 rounded-full border-gray-400 border cursor-pointer"
          />
        </Link>
      </div>
    </div>
  );
}

export default Navbar;
