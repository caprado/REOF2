void func_00163e38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163e38: addiu $sp, $sp, -0x20
    a1 = 1;                                                     // 0x00163e3c: addiu $a1, $zero, 1
    func_00163f80();  // 0x163f78                                // 0x00163e54: jal 0x163f78
    s2 = *(int32_t*)((s0) + 0x40);                              // 0x00163e58: lw $s2, 0x40($s0)
    s1 = *(int32_t*)((s0) + 4);                                 // 0x00163e5c: lw $s1, 4($s0)
    v0 = 1;                                                     // 0x00163e60: addiu $v0, $zero, 1
    a1 = 1;                                                     // 0x00163e64: addiu $a1, $zero, 1
    if (s1 == v0) goto label_0x163e80;                          // 0x00163e68: beq $s1, $v0, 0x163e80
    func_00163f80();  // 0x163f78                                // 0x00163e70: jal 0x163f78
    goto label_0x163edc;                                        // 0x00163e78: b 0x163edc
label_0x163e80:
    v0 = 0x21 << 16;                                            // 0x00163e80: lui $v0, 0x21
    func_00163f98();  // 0x163f88                                // 0x00163e84: jal 0x163f88
    g_00215560 = s0;  // Global at 0x00215560                   // 0x00163e88: sw $s0, 0x5560($v0)
    func_00172248();  // 0x1721f0                                // 0x00163e8c: jal 0x1721f0
    func_00163f98();  // 0x163f88                                // 0x00163e98: jal 0x163f88
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00163ea0: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x163eb8;                           // 0x00163ea4: bnez $v0, 0x163eb8
    goto label_0x163ec4;                                        // 0x00163eac: b 0x163ec4
    *(uint32_t*)((s0) + 0x68) = 0;                              // 0x00163eb0: sw $zero, 0x68($s0)
    /* nop */                                                   // 0x00163eb4: nop 
label_0x163eb8:
    func_001639b0();  // 0x163938                                // 0x00163eb8: jal 0x163938
    *(uint32_t*)((s0) + 0x68) = s1;                             // 0x00163ebc: sw $s1, 0x68($s0)
label_0x163ec4:
    func_00163f80();  // 0x163f78                                // 0x00163ec4: jal 0x163f78
    func_00172188();  // 0x172160                                // 0x00163ecc: jal 0x172160
    v0 = v0 ^ 1;                                                // 0x00163ed4: xori $v0, $v0, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00163ed8: sltu $v0, $zero, $v0
label_0x163edc:
    return;                                                     // 0x00163eec: jr $ra
    sp = sp + 0x20;                                             // 0x00163ef0: addiu $sp, $sp, 0x20
}