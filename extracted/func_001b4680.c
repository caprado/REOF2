void func_001b4680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b4680: addiu $sp, $sp, -0x30
    v0 = 0x22 << 16;                                            // 0x001b4684: lui $v0, 0x22
    at = 0x31 << 16;                                            // 0x001b468c: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b4690: addu.qb $zero, $sp, $s1
    v0 = v0 + -0x3b20;                                          // 0x001b4694: addiu $v0, $v0, -0x3b20
    t0 = g_003137fc;  // Global at 0x003137fc                   // 0x001b46a4: lw $t0, 0x37fc($at)
    v1 = s1 << 2;                                               // 0x001b46a8: sll $v1, $s1, 2
    a1 = 0xa << 16;                                             // 0x001b46ac: lui $a1, 0xa
    v0 = v0 + v1;                                               // 0x001b46b0: addu $v0, $v0, $v1
    a2 = 1;                                                     // 0x001b46b4: addiu $a2, $zero, 1
    a0 = g_0021c4e0;  // Global at 0x0021c4e0                   // 0x001b46b8: lw $a0, 0($v0)
    s0 = t0 + a1;                                               // 0x001b46c0: addu $s0, $t0, $a1
    func_001d3390();  // 1d3390                                // 0x001b46c4: jal 0x1d3390
    if (v0 <= 0) goto label_0x1b46f8;                           // 0x001b46cc: blez $v0, 0x1b46f8
    at = 0x31 << 16;                                            // 0x001b46d0: lui $at, 0x31
    a3 = g_00313804;  // Global at 0x00313804                   // 0x001b46d8: lhu $a3, 0x3804($at)
    func_001b4a80();  // 1b4a80                                // 0x001b46e0: jal 0x1b4a80
    a2 = 0x400;                                                 // 0x001b46e4: addiu $a2, $zero, 0x400
    func_001b4fa0();  // 1b4fa0                                // 0x001b46e8: jal 0x1b4fa0
    /* nop */                                                   // 0x001b46ec: nop 
    func_001b5020();  // 1b5020                                // 0x001b46f0: jal 0x1b5020
label_0x1b46f8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b46fc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4700: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4704: jr $ra
    sp = sp + 0x30;                                             // 0x001b4708: addiu $sp, $sp, 0x30
}