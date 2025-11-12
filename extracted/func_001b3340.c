void func_001b3340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_58;
    
    sp = sp + -0x90;                                            // 0x001b3340: addiu $sp, $sp, -0x90
    v1 = 3;                                                     // 0x001b3344: addiu $v1, $zero, 3
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001b334c: slti $v0, $v1, 8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b3350: addu.qb $zero, $sp, $s1
    local_58 = a2;                                              // 0x001b335c: sw $a2, 0x58($sp)
    if (v0 != 0) goto label_0x1b3384;                           // 0x001b3374: bnez $v0, 0x1b3384
    goto label_0x1b3390;                                        // 0x001b337c: b 0x1b3390
label_0x1b3384:
    v0 = 8;                                                     // 0x001b3384: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001b3388: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001b338c: sll $v1, $v0, 3
label_0x1b3390:
    a1 = local_58;                                              // 0x001b3390: lw $a1, 0x58($sp)
    v0 = sp + 0x90;                                             // 0x001b3394: addiu $v0, $sp, 0x90
    a0 = 0x2b << 16;                                            // 0x001b3398: lui $a0, 0x2b
    a2 = v0 - v1;                                               // 0x001b339c: subu $a2, $v0, $v1
    func_0010f580();  // 0x10f528                                // 0x001b33a0: jal 0x10f528
    a0 = a0 + -0x43c0;                                          // 0x001b33a4: addiu $a0, $a0, -0x43c0
    func_001b34f0();  // 0x1b3490                                // 0x001b33a8: jal 0x1b3490
    a0 = -1;                                                    // 0x001b33ac: addiu $a0, $zero, -1
    a0 = 8;                                                     // 0x001b33b0: addiu $a0, $zero, 8
    func_001b3710();  // 0x1b36e0                                // 0x001b33b4: jal 0x1b36e0
    a1 = 0xc;                                                   // 0x001b33b8: addiu $a1, $zero, 0xc
    func_001b3490();  // 0x1b3460                                // 0x001b33c0: jal 0x1b3460
    a0 = 0x2b << 16;                                            // 0x001b33c8: lui $a0, 0x2b
    func_001b3580();  // 0x1b34f0                                // 0x001b33cc: jal 0x1b34f0
    a0 = a0 + -0x43c0;                                          // 0x001b33d0: addiu $a0, $a0, -0x43c0
    a0 = 8;                                                     // 0x001b33d4: addiu $a0, $zero, 8
    func_001b3710();  // 0x1b36e0                                // 0x001b33d8: jal 0x1b36e0
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b33e4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b33e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b33ec: jr $ra
    sp = sp + 0x90;                                             // 0x001b33f0: addiu $sp, $sp, 0x90
}