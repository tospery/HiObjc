Pod::Spec.new do |s|
  s.name             = 'HiObjc'
  s.version          = '1.0.1'
  s.summary          = 'iOS App Framework.'
  s.description      = <<-DESC
						iOS App Framework using ObjC.
                       DESC

  s.homepage         = 'https://github.com/tospery/HiObjc'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'YangJianxiang' => 'tospery@gmail.com' }
  s.source           = { :git => 'https://github.com/tospery/HiObjc.git', :tag => s.version.to_s }

  s.platform         = :ios, '11.0'
  s.frameworks       = 'Foundation'
  s.source_files     = 'HiObjc/HiObjc.h'
  
  s.subspec 'HOCore' do |ss|
    ss.source_files = 'HiObjc/HOCore/**/*'
  end

end
