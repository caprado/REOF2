void func_001982c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001982c0: addiu $sp, $sp, -0x10
    a1 = 0x21 << 16;                                            // 0x001982c4: lui $a1, 0x21
    a2 = 0x21 << 16;                                            // 0x001982cc: lui $a2, 0x21
    t3 = *(int32_t*)((gp) + -0x645c);                           // 0x001982d0: lw $t3, -0x645c($gp)
    a3 = 0x21 << 16;                                            // 0x001982d4: lui $a3, 0x21
    t0 = 0x21 << 16;                                            // 0x001982d8: lui $t0, 0x21
    t1 = 0x21 << 16;                                            // 0x001982dc: lui $t1, 0x21
    t2 = 0x21 << 16;                                            // 0x001982e0: lui $t2, 0x21
    a1 = a1 + 0x6780;                                           // 0x001982e4: addiu $a1, $a1, 0x6780
    a2 = a2 + 0x6790;                                           // 0x001982e8: addiu $a2, $a2, 0x6790
    a3 = a3 + 0x67a0;                                           // 0x001982ec: addiu $a3, $a3, 0x67a0
    t0 = t0 + 0x67b0;                                           // 0x001982f0: addiu $t0, $t0, 0x67b0
    t1 = t1 + 0x67c0;                                           // 0x001982f4: addiu $t1, $t1, 0x67c0
    func_00198330();  // 198330                                // 0x001982f8: jal 0x198330
    t2 = t2 + 0x67d0;                                           // 0x001982fc: addiu $t2, $t2, 0x67d0
    if (v0 != 0) goto label_0x198310;                           // 0x00198300: bnez $v0, 0x198310
    a0 = 0x21 << 16;                                            // 0x00198304: lui $a0, 0x21
    goto label_0x19831c;                                        // 0x00198308: b 0x19831c
label_0x198310:
    func_00193e90();  // 193e90                                // 0x00198310: jal 0x193e90
    a0 = a0 + 0x6760;                                           // 0x00198314: addiu $a0, $a0, 0x6760
    v0 = 1;                                                     // 0x00198318: addiu $v0, $zero, 1
label_0x19831c:
    return;                                                     // 0x00198320: jr $ra
    sp = sp + 0x10;                                             // 0x00198324: addiu $sp, $sp, 0x10
}