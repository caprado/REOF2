void func_00144d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00144d98: addiu $sp, $sp, -0xa0
    func_00145478();  // 0x145208                                // 0x00144de4: jal 0x145208
    a1 = 2;                                                     // 0x00144de8: addiu $a1, $zero, 2
    if (s1 == 0) goto label_0x144e0c;                           // 0x00144dec: beqz $s1, 0x144e0c
    if (s0 == 0) goto label_0x144e0c;                           // 0x00144df4: beqz $s0, 0x144e0c
    func_00145818();  // 0x1456a8                                // 0x00144dfc: jal 0x1456a8
    goto label_0x144e10;                                        // 0x00144e04: b 0x144e10
label_0x144e0c:
label_0x144e10:
    func_00144bf8();  // 0x144b70                                // 0x00144e1c: jal 0x144b70
    if (s7 == 0) goto label_0x144e3c;                           // 0x00144e24: beqz $s7, 0x144e3c
    func_00143f28();  // 0x143f08                                // 0x00144e2c: jal 0x143f08
    *(uint32_t*)(fp) = v0;                                      // 0x00144e34: sw $v0, 0($fp)
label_0x144e3c:
    func_00145478();  // 0x145208                                // 0x00144e3c: jal 0x145208
    a1 = 2;                                                     // 0x00144e40: addiu $a1, $zero, 2
    if (s4 == 0) goto label_0x144e64;                           // 0x00144e44: beqz $s4, 0x144e64
    if (s0 == 0) goto label_0x144e64;                           // 0x00144e4c: beqz $s0, 0x144e64
    func_00145818();  // 0x1456a8                                // 0x00144e54: jal 0x1456a8
    goto label_0x144e68;                                        // 0x00144e5c: b 0x144e68
label_0x144e64:
label_0x144e68:
    if (s6 == 0) goto label_0x144e7c;                           // 0x00144e68: beqz $s6, 0x144e7c
    v0 = *(int32_t*)((s2) + 4);                                 // 0x00144e70: lw $v0, 4($s2)
    v0 = v0 >> 1;                                               // 0x00144e74: sra $v0, $v0, 1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x00144e78: sw $v0, 4($s2)
label_0x144e7c:
    func_00144bf8();  // 0x144b70                                // 0x00144e84: jal 0x144b70
    a0 = s2 + 4;                                                // 0x00144e88: addiu $a0, $s2, 4
    if (s6 == 0) goto label_0x144ea0;                           // 0x00144e8c: beqz $s6, 0x144ea0
    /* nop */                                                   // 0x00144e90: nop 
    v0 = *(int32_t*)((s2) + 4);                                 // 0x00144e94: lw $v0, 4($s2)
    v0 = v0 << 1;                                               // 0x00144e98: sll $v0, $v0, 1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x00144e9c: sw $v0, 4($s2)
label_0x144ea0:
    if (s7 == 0) goto label_0x144eb8;                           // 0x00144ea0: beqz $s7, 0x144eb8
    func_00143f28();  // 0x143f08                                // 0x00144ea8: jal 0x143f08
    *(uint32_t*)((fp) + 4) = v0;                                // 0x00144eb0: sw $v0, 4($fp)
label_0x144eb8:
    return;                                                     // 0x00144edc: jr $ra
    sp = sp + 0xa0;                                             // 0x00144ee0: addiu $sp, $sp, 0xa0
}