void func_00136190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x00136190: addiu $sp, $sp, -0x280
    s1 = sp + 0x130;                                            // 0x001361a0: addiu $s1, $sp, 0x130
    func_001358d8();  // 0x135790                                // 0x001361b0: jal 0x135790
    a0 = 0x22 << 16;                                            // 0x001361b8: lui $a0, 0x22
    v0 = local_130;                                             // 0x001361bc: lb $v0, 0x130($sp)
    a0 = &str_00224678;  // "cvFsIsExistFile #2:illegal device name" // 0x001361c0: addiu $a0, $a0, 0x4678
    if (v0 == 0) goto label_0x136214;                           // 0x001361c8: beqz $v0, 0x136214
    func_001355f0();  // 0x135548                                // 0x001361d0: jal 0x135548
    a0 = 0x22 << 16;                                            // 0x001361d8: lui $a0, 0x22
    if (s0 != 0) goto label_0x1361f0;                           // 0x001361e0: bnez $s0, 0x1361f0
    a0 = &str_002246c8;  // "cvFsIsExistFile #4:vtbl error"     // 0x001361e4: addiu $a0, $a0, 0x46c8
    func_00134fb0();  // 0x134ec0                                // 0x001361e8: jal 0x134ec0
    /* nop */                                                   // 0x001361ec: nop 
label_0x1361f0:
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x001361f0: lw $v0, 0x40($s0)
    /* beqzl $v0, 0x136210 */                                   // 0x001361f4: beqzl $v0, 0x136210
    a0 = 0x22 << 16;                                            // 0x001361f8: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x001361fc: jalr $v0
    goto label_0x136224;                                        // 0x00136204: b 0x136224
    /* nop */                                                   // 0x0013620c: nop 
    a0 = &str_002246f0;  // "cvFsGetMaxByteRate #1:handle error" // 0x00136210: addiu $a0, $a0, 0x46f0
label_0x136214:
    func_00134fb0();  // 0x134ec0                                // 0x00136214: jal 0x134ec0
    /* nop */                                                   // 0x00136218: nop 
label_0x136224:
    return;                                                     // 0x0013622c: jr $ra
    sp = sp + 0x280;                                            // 0x00136230: addiu $sp, $sp, 0x280
}