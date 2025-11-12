void func_0019e820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x29 << 16;                                            // 0x0019e820: lui $a0, 0x29
    goto label_0x19e85c;                                        // 0x0019e828: b 0x19e85c
    a0 = a0 + -0x3b50;                                          // 0x0019e82c: addiu $a0, $a0, -0x3b50
label_0x19e830:
    v0 = v0 - a1;                                               // 0x0019e830: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x0019e834: sll $v0, $v0, 2
    v0 = a0 + v0;                                               // 0x0019e838: addu $v0, $a0, $v0
    v1 = *(int16_t*)((v0) + 0x14);                              // 0x0019e83c: lh $v1, 0x14($v0)
    if (v1 != 0) goto label_0x19e858;                           // 0x0019e840: bnez $v1, 0x19e858
    /* nop */                                                   // 0x0019e844: nop 
    v1 = *(int32_t*)((gp) + -0x6480);                           // 0x0019e848: lw $v1, -0x6480($gp)
    v1 = v1 + 1;                                                // 0x0019e84c: addiu $v1, $v1, 1
    goto label_0x19e86c;                                        // 0x0019e850: b 0x19e86c
    *(uint32_t*)((gp) + -0x6480) = v1;                          // 0x0019e854: sw $v1, -0x6480($gp)
label_0x19e858:
    a1 = a1 + 1;                                                // 0x0019e858: addiu $a1, $a1, 1
label_0x19e85c:
    v0 = (a1 < 0x200) ? 1 : 0;                                  // 0x0019e85c: slti $v0, $a1, 0x200
    if (v0 != 0) goto label_0x19e830;                           // 0x0019e860: bnez $v0, 0x19e830
    v0 = a1 << 3;                                               // 0x0019e864: sll $v0, $a1, 3
label_0x19e86c:
    return;                                                     // 0x0019e86c: jr $ra
    /* nop */                                                   // 0x0019e870: nop 
}