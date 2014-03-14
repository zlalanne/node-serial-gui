module.exports = function(grunt) {

  grunt.initConfig({
    nodewebkit: {
      options: {
	build_dir: './webkitbuild',
        mac: true,
        win: true,
  	linux32: true,
        linux64: true
      },
      src: ['index.html', 'package.json', 'node_modules/**/*', 'assets/**/*']
   },
  })
grunt.loadNpmTasks('grunt-node-webkit-builder');
grunt.registerTask('default', ['nodewebkit']);
}

