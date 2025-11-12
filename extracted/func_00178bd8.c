void func_00178bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178bd8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00178bdc: lui $a1, 0xff00
    a1 = a1 | 0x701;                                            // 0x00178be4: ori $a1, $a1, 0x701
    return func_00169940();  // Tail call                        // 0x00178bec: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00178bf0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00178bf4: nop 
    sp = sp + -0x10;                                            // 0x00178bf8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00178bfc: lui $a1, 0xff00
    a1 = a1 | 0x701;                                            // 0x00178c04: ori $a1, $a1, 0x701
    return func_00169940();  // Tail call                        // 0x00178c0c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00178c10: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00178c14: nop 
    sp = sp + -0x20;                                            // 0x00178c18: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00178c30: lw $v0, 0x48($s0)
    v0 = v0 + -3;                                               // 0x00178c34: addiu $v0, $v0, -3
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00178c38: sltiu $v0, $v0, 2
    if (v0 != 0) goto label_0x178c50;                           // 0x00178c3c: bnez $v0, 0x178c50
    goto label_0x178c78;                                        // 0x00178c44: b 0x178c78
    *(uint32_t*)(s1) = 0;                                       // 0x00178c48: sw $zero, 0($s1)
    /* nop */                                                   // 0x00178c4c: nop 
label_0x178c50:
    func_00167960();  // 0x167898                                // 0x00178c50: jal 0x167898
    a1 = *(int32_t*)((s0) + 0x1c48);                            // 0x00178c54: lw $a1, 0x1c48($s0)
    if (v0 != 0) goto label_0x178c7c;                           // 0x00178c58: bnez $v0, 0x178c7c
    func_00176c28();  // 0x176bf0                                // 0x00178c60: jal 0x176bf0
    a1 = *(int32_t*)(s1);                                       // 0x00178c64: lw $a1, 0($s1)
    /* bnezl $v0, 0x178c7c */                                   // 0x00178c68: bnezl $v0, 0x178c7c
    goto label_0x178c7c;                                        // 0x00178c70: b 0x178c7c
    *(uint32_t*)(s1) = 0;                                       // 0x00178c74: sw $zero, 0($s1)
label_0x178c78:
label_0x178c7c:
    return;                                                     // 0x00178c88: jr $ra
    sp = sp + 0x20;                                             // 0x00178c8c: addiu $sp, $sp, 0x20
}