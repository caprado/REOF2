void func_001ae450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ae450: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ae458: addu.qb $zero, $sp, $s1
    func_001b7a80();  // 0x1b7a70                                // 0x001ae464: jal 0x1b7a70
    a0 = 0xe;                                                   // 0x001ae468: addiu $a0, $zero, 0xe
    if (v0 != 0) goto label_0x1ae4cc;                           // 0x001ae46c: bnez $v0, 0x1ae4cc
    v1 = 0x2b << 16;                                            // 0x001ae470: lui $v1, 0x2b
    a0 = s1 << 2;                                               // 0x001ae474: sll $a0, $s1, 2
    v1 = v1 + -0x5788;                                          // 0x001ae478: addiu $v1, $v1, -0x5788
    s0 = v1 + a0;                                               // 0x001ae47c: addu $s0, $v1, $a0
    a0 = *(int32_t*)(s0);                                       // 0x001ae480: lw $a0, 0($s0)
    if (a0 == 0) goto label_0x1ae4cc;                           // 0x001ae484: beqz $a0, 0x1ae4cc
    /* nop */                                                   // 0x001ae488: nop 
    func_0012a5e8();  // 0x12a5b0                                // 0x001ae48c: jal 0x12a5b0
    /* nop */                                                   // 0x001ae490: nop 
    a0 = *(int32_t*)(s0);                                       // 0x001ae494: lw $a0, 0($s0)
    func_0012a520();  // 0x12a4f0                                // 0x001ae498: jal 0x12a4f0
    func_0012a4f0();  // 0x12a440                                // 0x001ae4a0: jal 0x12a440
    a0 = *(int32_t*)(s0);                                       // 0x001ae4a4: lw $a0, 0($s0)
    v1 = s1 << 1;                                               // 0x001ae4a8: sll $v1, $s1, 1
    v0 = 0x2b << 16;                                            // 0x001ae4ac: lui $v0, 0x2b
    v1 = v1 + s1;                                               // 0x001ae4b0: addu $v1, $v1, $s1
    v0 = v0 + -0x57d8;                                          // 0x001ae4b4: addiu $v0, $v0, -0x57d8
    v1 = v1 << 3;                                               // 0x001ae4b8: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001ae4bc: addu $v0, $v0, $v1
    a1 = g_002aa828;  // Global at 0x002aa828                   // 0x001ae4c0: lw $a1, 0($v0)
    func_001adab0();  // 0x1ad9c0                                // 0x001ae4c4: jal 0x1ad9c0
label_0x1ae4cc:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ae4d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae4d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae4d8: jr $ra
    sp = sp + 0x30;                                             // 0x001ae4dc: addiu $sp, $sp, 0x30
}