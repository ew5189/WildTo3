//
//  FogetPassWordViewController.m
//  WildTo
//
//  Created by 千锋 on 16/1/17.
//  Copyright (c) 2016年 LSP. All rights reserved.
//
#import "Define.h"
#import "FogetPassWordViewController.h"

@interface FogetPassWordViewController ()<UITextFieldDelegate>

@property(strong ,nonatomic) UIImageView *imageView;
//账号
@property(strong ,nonatomic) UITextField *accountNum;
//验证码
@property(strong ,nonatomic) UITextField *priPassword;
//密码
@property(strong ,nonatomic) UITextField *password;
//确认密码
@property(strong ,nonatomic) UITextField *resetPassword;

@property(strong ,nonatomic) UIButton *getPriCodeBtn;
@property(strong ,nonatomic) UIButton *registerBtn;
@end

@implementation FogetPassWordViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.navigationItem.title =@"找回密码";
    self.navigationItem.leftBarButtonItem =[[UIBarButtonItem alloc]initWithTitle:@"返回" style:UIBarButtonItemStyleDone target:self action:@selector(clickBack)];
    self.navigationItem.leftBarButtonItem.tintColor =[UIColor blackColor];
    self.view.backgroundColor =[UIColor colorWithRed:215/255.0f green:215/255.0f blue:215/255.0f alpha:0.8];
    
    _imageView =[[UIImageView alloc]initWithFrame:CGRectMake(ScreenW*0.4, ScreenH*0.1, 111, 92)];
    _imageView.center =CGPointMake(ScreenW*0.5, ScreenH*0.2);
    _imageView.image =[UIImage imageNamed:@"logo"];
    [self.view addSubview:_imageView];
    
    
    
    //账号
    [self creatAccount];
    //验证码
    [self creatPriPassword];
    //密码
    [self creatPassword];
    //确认密码
    [self creatResetPassword];
    //注册
    [self creatRegisterBtn];
    
    
    
}

//注册按钮
-(void)creatRegisterBtn
{
    _registerBtn =[UIButton buttonWithType:UIButtonTypeCustom];
    _registerBtn.frame =CGRectMake(10, CGRectGetMaxY(_password.frame)+90, ScreenW-20, 40);
    _registerBtn.backgroundColor =[UIColor colorWithRed:76/255.0f green:162/255.0f blue:43/255.0f alpha:1];
    [_registerBtn setTitle:@"提交" forState:UIControlStateNormal];
    [_registerBtn setTitle:@"提交" forState:UIControlStateHighlighted];
    [_registerBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [_registerBtn addTarget:self action:@selector(clickRegister) forControlEvents:UIControlEventTouchUpInside];
    _registerBtn.layer.cornerRadius= 10;
    [self.view addSubview:_registerBtn];
    
}

//账号：手机号码输入框
-(void)creatAccount
{
    _accountNum =[[UITextField alloc]initWithFrame:CGRectMake(10, CGRectGetMaxY(_imageView.frame)+30, ScreenW-20, 40)];
    _accountNum.delegate =self;
    _accountNum.tag =101;
    _accountNum.placeholder =@" 手机号码";
    _accountNum.borderStyle =UITextFieldViewModeUnlessEditing;
    _accountNum.background =[UIImage imageNamed:@"icon_bg_selectsex_normal"];
    [self.view addSubview:_accountNum];
    
    _getPriCodeBtn =[[UIButton alloc]initWithFrame:CGRectMake(0, 0, 75, 30)];
    [_getPriCodeBtn setTitle:@"获取验证码" forState:UIControlStateNormal];
    _getPriCodeBtn.backgroundColor =[UIColor colorWithRed:76/255.0f green:162/255.0f blue:43/255.0f alpha:1];
    [_getPriCodeBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [_getPriCodeBtn addTarget:self action:@selector(clickGetCode) forControlEvents:UIControlEventTouchUpInside];
    _getPriCodeBtn.titleLabel.font =[UIFont boldSystemFontOfSize:14];
    _accountNum.rightView =_getPriCodeBtn;
    _accountNum.rightViewMode =UITextFieldViewModeAlways;
    
}
//验证码输入框
-(void)creatPriPassword
{
    _priPassword =[[UITextField alloc]initWithFrame:CGRectMake(10, CGRectGetMaxY(_accountNum.frame)+1, ScreenW-20, 40)];
    _priPassword.delegate =self;
    _priPassword.placeholder =@"  验证码";
    _priPassword.tag =102;
    _priPassword.background =[UIImage imageNamed:@"icon_bg_selectsex_normal"];
    [self.view addSubview:_priPassword];
    
}
//密码
-(void)creatPassword
{
    _password =[[UITextField alloc]initWithFrame:CGRectMake(10, CGRectGetMaxY(_priPassword.frame)+1, ScreenW-20, 40)];
    _password.delegate =self;
    _password.placeholder =@"  密码";
    _password.secureTextEntry =YES;
    _password.background =[UIImage imageNamed:@"icon_bg_selectsex_normal"];
    [self.view addSubview:_password];
    
}
//确认密码
-(void)creatResetPassword
{
    
    _resetPassword =[[UITextField alloc]initWithFrame:CGRectMake(10, CGRectGetMaxY(_password.frame)+1, ScreenW-20, 40)];
    _resetPassword.delegate =self;
    _resetPassword.placeholder =@"  确认密码";
    _resetPassword.secureTextEntry =YES;
    _resetPassword.background =[UIImage imageNamed:@"icon_bg_selectsex_normal"];
    [self.view addSubview:_resetPassword];
    
}

//点击了提交
-(void)clickRegister
{
   
        if (_accountNum.text.length!=11) {
            UIAlertView *alert =[[UIAlertView alloc]initWithTitle:nil message:@"手机号码必须是11位" delegate:self cancelButtonTitle:@"取消" otherButtonTitles:nil];
            [alert show];
        }else{
            
            
            
        }
        
}


-(void)clickBack
{
    [self.navigationController popViewControllerAnimated:YES];
    
}
//点击了获取验证码
-(void)clickGetCode
{
    NSLog(@"验证码是 xxxxxx");
}

#pragma mark  UITextField 代理方法

-(BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    if (textField.tag ==101) {
        return [self validateNumber:string];
    }else if (textField.tag ==102)
    {
        return [self validateNumber:string];
    }
    return YES;
}

//只能输入数字 的方法
-(BOOL)validateNumber:(NSString*)number {
    BOOL res = YES;
    NSCharacterSet* tmpSet = [NSCharacterSet characterSetWithCharactersInString:@"0123456789"];
    int i = 0;
    while (i < number.length) {
        NSString * string = [number substringWithRange:NSMakeRange(i, 1)];
        NSRange range = [string rangeOfCharacterFromSet:tmpSet];
        if (range.length == 0) {
            res = NO;
            break;
        }
        i++;
    }
    return res;
}

-(BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}
-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [_accountNum resignFirstResponder];
    [_priPassword resignFirstResponder];
    [_password resignFirstResponder];
    [_resetPassword resignFirstResponder];
}


@end
