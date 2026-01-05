void func_00172c18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172c18: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x00172c1c: addiu $a1, $zero, 5
    func_001752e8();  // 1752e8                                // 0x00172c2c: jal 0x1752e8
    if (v0 == 0) goto label_0x172c4c;                           // 0x00172c34: beqz $v0, 0x172c4c
    func_00177938();  // 177938                                // 0x00172c3c: jal 0x177938
    a1 = 6;                                                     // 0x00172c40: addiu $a1, $zero, 6
    if (v0 != 0) goto label_0x172ca0;                           // 0x00172c44: bnez $v0, 0x172ca0
    v0 = 1;                                                     // 0x00172c48: addiu $v0, $zero, 1
label_0x172c4c:
    func_001752e8();  // 1752e8                                // 0x00172c50: jal 0x1752e8
    a1 = 6;                                                     // 0x00172c54: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x172c80;                           // 0x00172c58: beqz $v0, 0x172c80
    func_00177938();  // 177938                                // 0x00172c64: jal 0x177938
    a1 = 7;                                                     // 0x00172c68: addiu $a1, $zero, 7
    if (v0 == 0) goto label_0x172c80;                           // 0x00172c6c: beqz $v0, 0x172c80
label_0x172c74:
    goto label_0x172ca0;                                        // 0x00172c74: b 0x172ca0
    v0 = 1;                                                     // 0x00172c78: addiu $v0, $zero, 1
    /* nop */                                                   // 0x00172c7c: nop 
label_0x172c80:
label_0x172c84:
    s0 = s0 + 1;                                                // 0x00172c84: addiu $s0, $s0, 1
    func_001679c0();  // 1679c0                                // 0x00172c88: jal 0x1679c0
    if (v0 != 0) goto label_0x172c74;                           // 0x00172c90: bnez $v0, 0x172c74
    v1 = ((unsigned)s0 < (unsigned)8) ? 1 : 0;                  // 0x00172c94: sltiu $v1, $s0, 8
    if (v1 != 0) goto label_0x172c84;                           // 0x00172c98: bnez $v1, 0x172c84
label_0x172ca0:
    return;                                                     // 0x00172cac: jr $ra
    sp = sp + 0x20;                                             // 0x00172cb0: addiu $sp, $sp, 0x20
}