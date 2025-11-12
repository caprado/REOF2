void func_0016c268() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0016c268: addiu $sp, $sp, -0x40
    s0 = s2 + 0x78;                                             // 0x0016c27c: addiu $s0, $s2, 0x78
    s3 = *(int32_t*)((s2) + 0x1b30);                            // 0x0016c288: lw $s3, 0x1b30($s2)
    func_0016d308();  // 0x16d2f0                                // 0x0016c28c: jal 0x16d2f0
    s1 = *(int32_t*)(s3);                                       // 0x0016c290: lw $s1, 0($s3)
    v1 = 1;                                                     // 0x0016c294: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x16c334;                          // 0x0016c298: beql $v0, $v1, 0x16c334
    v0 = *(int32_t*)(s0);                                       // 0x0016c2a0: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x16c2bc;                           // 0x0016c2a4: beqz $v0, 0x16c2bc
    v1 = *(int32_t*)((s0) + 0x7c);                              // 0x0016c2ac: lw $v1, 0x7c($s0)
    if (v1 == 0) goto label_0x16c330;                           // 0x0016c2b0: beqz $v1, 0x16c330
    v0 = 1;                                                     // 0x0016c2b4: addiu $v0, $zero, 1
label_0x16c2bc:
    func_00159038();  // 0x158fd8                                // 0x0016c2bc: jal 0x158fd8
    v1 = 3 << 16;                                               // 0x0016c2c8: lui $v1, 3
    a2 = local_0;                                               // 0x0016c2cc: lw $a2, 0($sp)
    v1 = v1 | 0xffff;                                           // 0x0016c2d0: ori $v1, $v1, 0xffff
    a1 = 1;                                                     // 0x0016c2d4: addiu $a1, $zero, 1
    if (a2 == v1) goto label_0x16c330;                          // 0x0016c2d8: beq $a2, $v1, 0x16c330
    v0 = 1;                                                     // 0x0016c2dc: addiu $v0, $zero, 1
    func_001672a8();  // 0x167208                                // 0x0016c2e0: jal 0x167208
    /* nop */                                                   // 0x0016c2e4: nop 
    v1 = *(int32_t*)((s3) + 0xe8);                              // 0x0016c2ec: lw $v1, 0xe8($s3)
    a1 = 1;                                                     // 0x0016c2f0: addiu $a1, $zero, 1
    a2 = (v0 < v1) ? 1 : 0;                                     // 0x0016c2f4: slt $a2, $v0, $v1
    if (a2 == 0) goto label_0x16c330;                           // 0x0016c2f8: beqz $a2, 0x16c330
    v0 = 1;                                                     // 0x0016c2fc: addiu $v0, $zero, 1
    func_00177970();  // 0x177950                                // 0x0016c300: jal 0x177950
    /* nop */                                                   // 0x0016c304: nop 
    s1 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016c30c: sltiu $s1, $v0, 1
    func_001672a8();  // 0x167208                                // 0x0016c310: jal 0x167208
    func_001671e8();  // 0x1671c8                                // 0x0016c320: jal 0x1671c8
    s0 = (s0 < v0) ? 1 : 0;                                     // 0x0016c328: slt $s0, $s0, $v0
    v0 = ((unsigned)s0 < (unsigned)1) ? 1 : 0;                  // 0x0016c32c: sltiu $v0, $s0, 1
label_0x16c330:
label_0x16c334:
    return;                                                     // 0x0016c344: jr $ra
    sp = sp + 0x40;                                             // 0x0016c348: addiu $sp, $sp, 0x40
}