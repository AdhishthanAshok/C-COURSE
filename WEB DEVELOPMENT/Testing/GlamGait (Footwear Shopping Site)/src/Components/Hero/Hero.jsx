import React from "react";
import hero_img from "../assets/Hero_shoe2-Photoroom.png";

const Hero = () => {
  return (
    <section className="bg-gray-400 dark:bg-gray-100 ">
      <div className="grid h-full px-4 py-8 lg:gap-8 xl:gap-0 lg:py-16 lg:grid-cols-12 border-red-500">
        <div className="mr-auto place-self-center lg:col-span-7">
          <h1 className="max-w-2xl mb-4 text-4xl font-extrabold tracking-tight leading-none md:text-center md:text-5xl xl:text-6xl dark:text-black">
            Discover the latest footwear trends for every occasion
          </h1>
          <a
            href="#"
            className="flex items-center justify-center px-5 py-3 mr-3 w-1/2 text-base font-medium  active:bg-blue-400 dark:border-s-gray-950 text-black rounded-lg bg-primary-700 hover:bg-primary-800 dark:hover:bg-blue-700 dark:hover:text-white dark:active:bg-blue-400 "
          >
            <div>Explore More</div>
            <svg
              className="w-5 h-5 ml-2 -mr-1"
              fill="currentColor"
              viewBox="0 0 20 20"
              xmlns="http://www.w3.org/2000/svg"
            >
              <path
                fillRule="evenodd"
                d="M10.293 3.293a1 1 0 011.414 0l6 6a1 1 0 010 1.414l-6 6a1 1 0 01-1.414-1.414L14.586 11H3a1 1 0 110-2h11.586l-4.293-4.293a1 1 0 010-1.414z"
                clipRule="evenodd"
              ></path>
            </svg>
          </a>
        </div>
        <div className=" motion-safe:animate-pulse hidden lg:mt-0 lg:col-span-5 lg:flex">
          <img src={hero_img} alt="mockup" />
        </div>
      </div>
    </section>
  );
};

export default Hero;
