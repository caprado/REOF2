void func_00135548() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00135548: addiu $sp, $sp, -0x30
    v0 = *(int8_t*)(s1);                                        // 0x00135568: lb $v0, 0($s1)
    if (v0 != 0) goto label_0x135588;                           // 0x0013556c: bnez $v0, 0x135588
    func_001358d8();  // 1358d8                                // 0x00135574: jal 0x1358d8
    /* nop */                                                   // 0x00135578: nop 
    v1 = *(int8_t*)(s1);                                        // 0x0013557c: lb $v1, 0($s1)
    if (v1 == 0) goto label_0x1355d4;                           // 0x00135580: beqz $v1, 0x1355d4
label_0x135588:
    func_00136ca8();  // 136ca8                                // 0x0013558c: jal 0x136ca8
    func_00135220();  // 135220                                // 0x00135594: jal 0x135220
    if (s0 != 0) goto label_0x1355d0;                           // 0x001355a0: bnez $s0, 0x1355d0
    func_001358d8();  // 1358d8                                // 0x001355a8: jal 0x1358d8
    /* nop */                                                   // 0x001355ac: nop 
    func_00135220();  // 135220                                // 0x001355b0: jal 0x135220
    if (s0 == 0) goto label_0x1355d4;                           // 0x001355c0: beqz $s0, 0x1355d4
    func_0010ac68();  // 10ac68                                // 0x001355c8: jal 0x10ac68
    /* nop */                                                   // 0x001355cc: nop 
label_0x1355d0:
label_0x1355d4:
    return;                                                     // 0x001355e8: jr $ra
    sp = sp + 0x30;                                             // 0x001355ec: addiu $sp, $sp, 0x30
}