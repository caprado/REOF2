void func_0015bde0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0015bde0: addiu $sp, $sp, -0x40
    s1 = *(int32_t*)((a1) + 8);                                 // 0x0015be10: lw $s1, 8($a1)
    s0 = *(int32_t*)((a1) + 0xc);                               // 0x0015be14: lw $s0, 0xc($a1)
    a0 = *(int32_t*)((a1) + 0x24);                              // 0x0015be18: lw $a0, 0x24($a1)
    func_0015ba80();  // 15ba80                                // 0x0015be1c: jal 0x15ba80
    s4 = *(int32_t*)((a1) + 0x10);                              // 0x0015be20: lw $s4, 0x10($a1)
    a2 = s1 + 0xf;                                              // 0x0015be24: addiu $a2, $s1, 0xf
    a0 = (s1 < 0) ? 1 : 0;                                      // 0x0015be28: slti $a0, $s1, 0
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x0015be2c: slti $v1, $s0, 0
    a1 = s0 + 0xf;                                              // 0x0015be30: addiu $a1, $s0, 0xf
    if (a0 != 0) s1 = a2;                                       // 0x0015be34: movn $s1, $a2, $a0
    if (v1 != 0) s0 = a1;                                       // 0x0015be38: movn $s0, $a1, $v1
    a0 = 2;                                                     // 0x0015be3c: addiu $a0, $zero, 2
    s1 = s1 >> 4;                                               // 0x0015be40: sra $s1, $s1, 4
    if (v0 != a0) goto label_0x15be58;                          // 0x0015be44: bne $v0, $a0, 0x15be58
    v1 = s0 >> 4;                                               // 0x0015be48: sra $v1, $s0, 4
    /* multiply: s1 * v1 -> hi:lo */                            // 0x0015be4c: mult $ac2, $s1, $v1
    goto label_0x15be68;                                        // 0x0015be50: b 0x15be68
    v0 = v0 << 0xa;                                             // 0x0015be54: sll $v0, $v0, 0xa
label_0x15be58:
    /* multiply: s1 * v1 -> hi:lo */                            // 0x0015be58: mult $ac3, $s1, $v1
    v0 = v1 << 1;                                               // 0x0015be5c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0015be60: addu $v0, $v0, $v1
    v0 = v0 << 7;                                               // 0x0015be64: sll $v0, $v0, 7
label_0x15be68:
    if (s4 <= 0) goto label_0x15bea0;                           // 0x0015be68: blez $s4, 0x15bea0
    s2 = v0 + 0x40;                                             // 0x0015be6c: addiu $s2, $v0, 0x40
    s4 = -1;                                                    // 0x0015be74: addiu $s4, $zero, -1
    /* nop */                                                   // 0x0015be7c: nop 
label_0x15be80:
    func_0015d260();  // 15d260                                // 0x0015be84: jal 0x15d260
    s0 = s0 + -1;                                               // 0x0015be8c: addiu $s0, $s0, -1
    *(uint32_t*)(s1) = v0;                                      // 0x0015be90: sw $v0, 0($s1)
    s1 = s1 + 4;                                                // 0x0015be94: addiu $s1, $s1, 4
    if (s0 != 0) goto label_0x15be80;                           // 0x0015be98: bnez $s0, 0x15be80
    if (v0 == 0) s3 = s4;                                       // 0x0015be9c: movz $s3, $s4, $v0
label_0x15bea0:
    return;                                                     // 0x0015bec4: jr $ra
    sp = sp + 0x40;                                             // 0x0015bec8: addiu $sp, $sp, 0x40
}