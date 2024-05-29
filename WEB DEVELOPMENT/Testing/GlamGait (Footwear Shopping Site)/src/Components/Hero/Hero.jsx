import React from "react";
import hero_img from "../assets/Hero_shoe2.png";

const Hero = () => {
  return (
    <div className="flex flex-col md:flex-row items-center justify-between h-screen bg-gray-100 px-8 md:px-16 lg:px-24">
      <div className="flex flex-col items-start justify-center text-gray-800 space-y-6 md:space-y-8 lg:space-y-10">
        <h1 className="text-4xl md:text-5xl lg:text-6xl font-bold">
          Elevate Your Style
        </h1>
        <p className="text-lg md:text-xl lg:text-2xl">
          Discover the latest footwear trends for every occasion.
        </p>
        <button className="bg-blue-500 hover:bg-blue-600 text-white font-semibold py-3 px-6 rounded-md text-lg md:text-xl transition-colors duration-300 active:border-blue-100">
          Explore More!!
        </button>
      </div>
      <div className="mt-8 md:mt-0">
        <img
          src={hero_img}
          alt="hero_img_shoe"
          className="w-full max-w-md md:max-w-lg lg:max-w-xl"
        />
      </div>
    </div>
  );
};

export default Hero;
