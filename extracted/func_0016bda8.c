void func_0016bda8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016bda8: addiu $sp, $sp, -0x30
    func_00169af0();  // 169af0                                // 0x0016bdcc: jal 0x169af0
    if (v0 == 0) goto label_0x16be00;                           // 0x0016bdd4: beqz $v0, 0x16be00
    a1 = 0xff00 << 16;                                          // 0x0016bddc: lui $a1, 0xff00
    a1 = a1 | 0x185;                                            // 0x0016bdec: ori $a1, $a1, 0x185
    return func_00169940();  // Tail call                        // 0x0016bdf8: j 0x1698d0
    sp = sp + 0x30;                                             // 0x0016bdfc: addiu $sp, $sp, 0x30
label_0x16be00:
    v0 = *(int32_t*)((s2) + 0x1b30);                            // 0x0016be00: lw $v0, 0x1b30($s2)
    if (s0 == 0) goto label_0x16be1c;                           // 0x0016be04: beqz $s0, 0x16be1c
    a0 = v0 + 0x93c;                                            // 0x0016be08: addiu $a0, $v0, 0x93c
    if (s1 == 0) goto label_0x16be1c;                           // 0x0016be0c: beqz $s1, 0x16be1c
    /* nop */                                                   // 0x0016be10: nop 
    /* bnezl $s3, 0x16be30 */                                   // 0x0016be14: bnezl $s3, 0x16be30
    v0 = *(int32_t*)((s2) + 0x2c);                              // 0x0016be18: lw $v0, 0x2c($s2)
label_0x16be1c:
    func_0016f960();  // 16f960                                // 0x0016be1c: jal 0x16f960
    /* nop */                                                   // 0x0016be20: nop 
    goto label_0x16becc;                                        // 0x0016be24: b 0x16becc
    /* nop */                                                   // 0x0016be2c: nop 
    v0 = v0 + 4;                                                // 0x0016be30: addiu $v0, $v0, 4
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x0016be34: slt $v0, $s1, $v0
    /* beqzl $v0, 0x16be68 */                                   // 0x0016be38: beqzl $v0, 0x16be68
    *(uint32_t*)(a0) = s0;                                      // 0x0016be3c: sw $s0, 0($a0)
    a1 = 0xff00 << 16;                                          // 0x0016be48: lui $a1, 0xff00
    a1 = a1 | 0xf1d;                                            // 0x0016be54: ori $a1, $a1, 0xf1d
    return func_00169940();  // Tail call                        // 0x0016be60: j 0x1698d0
    sp = sp + 0x30;                                             // 0x0016be64: addiu $sp, $sp, 0x30
    *(uint32_t*)((a0) + 0xc) = s0;                              // 0x0016be6c: sw $s0, 0xc($a0)
    s0 = s0 + s3;                                               // 0x0016be70: addu $s0, $s0, $s3
    *(uint32_t*)((a0) + 4) = s1;                                // 0x0016be74: sw $s1, 4($a0)
    s1 = s1 + -2;                                               // 0x0016be78: addiu $s1, $s1, -2
    *(uint32_t*)((a0) + 0x14) = s0;                             // 0x0016be7c: sw $s0, 0x14($a0)
    s0 = s0 + s3;                                               // 0x0016be80: addu $s0, $s0, $s3
    *(uint32_t*)((a0) + 8) = s3;                                // 0x0016be84: sw $s3, 8($a0)
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x0016be88: sw $zero, 0x10($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x0016be8c: sw $zero, 0x18($a0)
    goto label_0x16beb4;                                        // 0x0016be90: b 0x16beb4
    a2 = (s1 < 0x11) ? 1 : 0;                                   // 0x0016be94: slti $a2, $s1, 0x11
label_0x16be98:
    a1 = a1 + 1;                                                // 0x0016be98: addiu $a1, $a1, 1
    v0 = v0 + 0x10;                                             // 0x0016be9c: addiu $v0, $v0, 0x10
    v1 = a0 + v0;                                               // 0x0016bea0: addu $v1, $a0, $v0
    *(uint32_t*)((v1) + 0x10) = 0;                              // 0x0016bea8: sw $zero, 0x10($v1)
    *(uint32_t*)((v0) + 0xc) = s0;                              // 0x0016beac: sw $s0, 0xc($v0)
    s0 = s0 + s3;                                               // 0x0016beb0: addu $s0, $s0, $s3
label_0x16beb4:
    v0 = 0x10;                                                  // 0x0016beb4: addiu $v0, $zero, 0x10
    if (a2 != 0) v0 = s1;                                       // 0x0016beb8: movn $v0, $s1, $a2
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x0016bebc: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x16be98;                           // 0x0016bec0: bnez $v0, 0x16be98
    v0 = a1 << 3;                                               // 0x0016bec4: sll $v0, $a1, 3
label_0x16becc:
    return;                                                     // 0x0016bee0: jr $ra
    sp = sp + 0x30;                                             // 0x0016bee4: addiu $sp, $sp, 0x30
}