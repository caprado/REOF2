void func_001b45a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b45a0: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001b45a4: lui $at, 0x31
    v1 = 0x8000 << 16;                                          // 0x001b45ac: lui $v1, 0x8000
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b45b0: addu.qb $zero, $sp, $s1
    g_003137b6 = 0;  // Global at 0x003137b6                    // 0x001b45bc: sb $zero, 0x37b6($at)
    a2 = s1 & v1;                                               // 0x001b45c0: and $a2, $s1, $v1
    at = 0x31 << 16;                                            // 0x001b45c4: lui $at, 0x31
    s0 = g_00313850;  // Global at 0x00313850                   // 0x001b45cc: lw $s0, 0x3850($at)
    v1 = 1;                                                     // 0x001b45d0: addiu $v1, $zero, 1
    a2 = ((unsigned)0 < (unsigned)a2) ? 1 : 0;                  // 0x001b45d4: sltu $a2, $zero, $a2
    at = 0x31 << 16;                                            // 0x001b45d8: lui $at, 0x31
    a1 = g_003137cb;  // Global at 0x003137cb                   // 0x001b45dc: lbu $a1, 0x37cb($at)
    if (a1 != v1) goto label_0x1b45f8;                          // 0x001b45e0: bne $a1, $v1, 0x1b45f8
    at = 0x2b << 16;                                            // 0x001b45e8: lui $at, 0x2b
    v1 = g_002ac544;  // Global at 0x002ac544                   // 0x001b45ec: lw $v1, -0x3abc($at)
    if (s1 == v1) goto label_0x1b4638;                          // 0x001b45f0: beq $s1, $v1, 0x1b4638
    /* nop */                                                   // 0x001b45f4: nop 
label_0x1b45f8:
    if (a2 != 0) goto label_0x1b4664;                           // 0x001b45f8: bnez $a2, 0x1b4664
    /* nop */                                                   // 0x001b45fc: nop 
    v0 = 0x22 << 16;                                            // 0x001b4600: lui $v0, 0x22
    v1 = s1 << 2;                                               // 0x001b4604: sll $v1, $s1, 2
    v0 = v0 + -0x3b20;                                          // 0x001b4608: addiu $v0, $v0, -0x3b20
    v0 = v0 + v1;                                               // 0x001b4610: addu $v0, $v0, $v1
    a2 = 1;                                                     // 0x001b4614: addiu $a2, $zero, 1
    a0 = g_0021c4e0;  // Global at 0x0021c4e0                   // 0x001b4618: lw $a0, 0($v0)
    func_001d3390();  // 1d3390                                // 0x001b461c: jal 0x1d3390
    if (v0 <= 0) goto label_0x1b4638;                           // 0x001b4624: blez $v0, 0x1b4638
    /* nop */                                                   // 0x001b4628: nop 
    v0 = 1;                                                     // 0x001b462c: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001b4630: lui $at, 0x31
    g_003137cb = v0;  // Global at 0x003137cb                   // 0x001b4634: sb $v0, 0x37cb($at)
label_0x1b4638:
    at = 0x31 << 16;                                            // 0x001b4638: lui $at, 0x31
    a3 = g_00313804;  // Global at 0x00313804                   // 0x001b4640: lhu $a3, 0x3804($at)
    func_001b47f0();  // 1b47f0                                // 0x001b4648: jal 0x1b47f0
    a2 = 0x200;                                                 // 0x001b464c: addiu $a2, $zero, 0x200
    v0 = 1;                                                     // 0x001b4650: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001b4654: lui $at, 0x31
    func_001b5020();  // 1b5020                                // 0x001b465c: jal 0x1b5020
    g_003137b6 = v0;  // Global at 0x003137b6                   // 0x001b4660: sb $v0, 0x37b6($at)
label_0x1b4664:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4668: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b466c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4670: jr $ra
    sp = sp + 0x30;                                             // 0x001b4674: addiu $sp, $sp, 0x30
}