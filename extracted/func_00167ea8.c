void func_00167ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00167ea8: addiu $sp, $sp, -0x30
    func_00169b88();  // 169b88                                // 0x00167ec8: jal 0x169b88
    func_00167fa0();  // 167fa0                                // 0x00167ed8: jal 0x167fa0
    t0 = *(int32_t*)((s2) + 8);                                 // 0x00167ee0: lw $t0, 8($s2)
    if (t0 != 0) goto label_0x167f08;                           // 0x00167ee4: bnez $t0, 0x167f08
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x00167eec: lw $v0, 0xc($s2)
    if (v0 != 0) goto label_0x167f0c;                           // 0x00167ef0: bnez $v0, 0x167f0c
    v0 = 1;                                                     // 0x00167ef4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s2) + 0x10);                              // 0x00167ef8: lw $v1, 0x10($s2)
    v0 = -1;                                                    // 0x00167efc: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x167f14;                          // 0x00167f00: bne $v1, $v0, 0x167f14
    v0 = 0x23 << 16;                                            // 0x00167f04: lui $v0, 0x23
label_0x167f08:
    v0 = 1;                                                     // 0x00167f08: addiu $v0, $zero, 1
label_0x167f0c:
    *(uint8_t*)(s2) = v0;                                       // 0x00167f0c: sb $v0, 0($s2)
    v0 = 0x23 << 16;                                            // 0x00167f10: lui $v0, 0x23
label_0x167f14:
    v0 = v0 + -0x6f20;                                          // 0x00167f14: addiu $v0, $v0, -0x6f20
    if (a0 != v0) goto label_0x167f68;                          // 0x00167f18: bne $a0, $v0, 0x167f68
    /* nop */                                                   // 0x00167f1c: nop 
    a0 = *(int32_t*)((s2) + 0x14);                              // 0x00167f20: lw $a0, 0x14($s2)
    a1 = *(int32_t*)((s2) + 0x18);                              // 0x00167f24: lw $a1, 0x18($s2)
    v0 = a0 + 0xf;                                              // 0x00167f28: addiu $v0, $a0, 0xf
    a0 = a0 + 0x1e;                                             // 0x00167f2c: addiu $a0, $a0, 0x1e
    v1 = a1 + 0xf;                                              // 0x00167f30: addiu $v1, $a1, 0xf
    a1 = a1 + 0x1e;                                             // 0x00167f34: addiu $a1, $a1, 0x1e
    a2 = (v0 < 0) ? 1 : 0;                                      // 0x00167f38: slti $a2, $v0, 0
    a3 = (v1 < 0) ? 1 : 0;                                      // 0x00167f3c: slti $a3, $v1, 0
    if (a2 != 0) v0 = a0;                                       // 0x00167f40: movn $v0, $a0, $a2
    if (a3 != 0) v1 = a1;                                       // 0x00167f44: movn $v1, $a1, $a3
    v0 = v0 >> 4;                                               // 0x00167f48: sra $v0, $v0, 4
    v1 = v1 >> 4;                                               // 0x00167f4c: sra $v1, $v1, 4
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00167f50: mult $ac2, $v0, $v1
    v0 = (v0 < 0x655) ? 1 : 0;                                  // 0x00167f54: slti $v0, $v0, 0x655
    if (v0 != 0) goto label_0x167f68;                           // 0x00167f58: bnez $v0, 0x167f68
    /* nop */                                                   // 0x00167f5c: nop 
    *(uint32_t*)((s2) + 8) = 0;                                 // 0x00167f60: sw $zero, 8($s2)
label_0x167f68:
    if (t0 != 0) goto label_0x167f7c;                           // 0x00167f68: bnez $t0, 0x167f7c
    v0 = 1;                                                     // 0x00167f6c: addiu $v0, $zero, 1
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x00167f70: lw $v0, 0xc($s2)
    if (v0 == 0) goto label_0x167f80;                           // 0x00167f74: beqz $v0, 0x167f80
    v0 = 1;                                                     // 0x00167f78: addiu $v0, $zero, 1
label_0x167f7c:
    *(uint8_t*)((s2) + 1) = v0;                                 // 0x00167f7c: sb $v0, 1($s2)
label_0x167f80:
    func_00169ba0();  // 169ba0                                // 0x00167f80: jal 0x169ba0
    return;                                                     // 0x00167f98: jr $ra
    sp = sp + 0x30;                                             // 0x00167f9c: addiu $sp, $sp, 0x30
}