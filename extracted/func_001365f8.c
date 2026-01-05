void func_001365f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x001365f8: addiu $sp, $sp, -0x280
    if (s0 != 0) goto label_0x136620;                           // 0x00136608: bnez $s0, 0x136620
    a0 = 0x22 << 16;                                            // 0x00136610: lui $a0, 0x22
    goto label_0x136694;                                        // 0x00136614: b 0x136694
    a0 = &str_00224888;  // "cvFsDeleteFile #2:illegal device name" // 0x00136618: addiu $a0, $a0, 0x4888
    /* nop */                                                   // 0x0013661c: nop 
label_0x136620:
    s1 = sp + 0x130;                                            // 0x00136620: addiu $s1, $sp, 0x130
    func_00135790();  // 135790                                // 0x0013662c: jal 0x135790
    v0 = local_130;                                             // 0x00136634: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x136650;                           // 0x00136638: bnez $v0, 0x136650
    a0 = 0x22 << 16;                                            // 0x00136640: lui $a0, 0x22
    goto label_0x136694;                                        // 0x00136644: b 0x136694
    a0 = &str_00224888;  // "cvFsDeleteFile #2:illegal device name" // 0x00136648: addiu $a0, $a0, 0x4888
    /* nop */                                                   // 0x0013664c: nop 
label_0x136650:
    func_00135548();  // 135548                                // 0x00136654: jal 0x135548
    /* bnezl $s0, 0x136678 */                                   // 0x00136660: bnezl $s0, 0x136678
    v0 = *(int32_t*)((s0) + 0x58);                              // 0x00136664: lw $v0, 0x58($s0)
    a0 = 0x22 << 16;                                            // 0x00136668: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x0013666c: jal 0x134ec0
    a0 = &str_002248d8;  // "cvFsDeleteFile #4:vtbl error"      // 0x00136670: addiu $a0, $a0, 0x48d8
    v0 = *(int32_t*)((s0) + 0x58);                              // 0x00136674: lw $v0, 0x58($s0)
    /* beqzl $v0, 0x136690 */                                   // 0x00136678: beqzl $v0, 0x136690
    a0 = 0x22 << 16;                                            // 0x0013667c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136680: jalr $v0
    goto label_0x1366a4;                                        // 0x00136688: b 0x1366a4
    a0 = &str_00224900;  // "cvFsGetDevName #1:vtbl error"      // 0x00136690: addiu $a0, $a0, 0x4900
label_0x136694:
    func_00134ec0();  // 134ec0                                // 0x00136694: jal 0x134ec0
    /* nop */                                                   // 0x00136698: nop 
    v0 = -1;                                                    // 0x0013669c: addiu $v0, $zero, -1
label_0x1366a4:
    return;                                                     // 0x001366ac: jr $ra
    sp = sp + 0x280;                                            // 0x001366b0: addiu $sp, $sp, 0x280
}