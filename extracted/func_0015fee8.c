void func_0015fee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x0015fee8: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0015fef4: jal 0x15fc80
    if (v0 != 0) goto label_0x15ff20;                           // 0x0015ff00: bnez $v0, 0x15ff20
    a1 = 0xf;                                                   // 0x0015ff04: addiu $a1, $zero, 0xf
    a0 = 0x22 << 16;                                            // 0x0015ff08: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015ff0c: jal 0x163410
    a0 = &str_00227df0;  // "E2010803: mwPlyGetSyncMode: mode is invalid." // 0x0015ff10: addiu $a0, $a0, 0x7df0
    goto label_0x15ff74;                                        // 0x0015ff14: b 0x15ff74
    v0 = -1;                                                    // 0x0015ff18: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0015ff1c: nop 
label_0x15ff20:
    func_001752e8();  // 0x175248                                // 0x0015ff20: jal 0x175248
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015ff24: lw $a0, 0x40($s0)
    v1 = 1;                                                     // 0x0015ff28: addiu $v1, $zero, 1
    a0 = local_0;                                               // 0x0015ff2c: lw $a0, 0($sp)
    a1 = 1;                                                     // 0x0015ff30: addiu $a1, $zero, 1
    if (a0 == v1) goto label_0x15ff70;                          // 0x0015ff34: beq $a0, $v1, 0x15ff70
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x0015ff38: slti $v0, $a0, 2
    /* beqzl $v0, 0x15ff58 */                                   // 0x0015ff3c: beqzl $v0, 0x15ff58
    v0 = 2;                                                     // 0x0015ff40: addiu $v0, $zero, 2
    if (a0 == 0) goto label_0x15ff70;                           // 0x0015ff44: beqz $a0, 0x15ff70
    goto label_0x15ff64;                                        // 0x0015ff4c: b 0x15ff64
    a0 = 0x22 << 16;                                            // 0x0015ff50: lui $a0, 0x22
    /* nop */                                                   // 0x0015ff54: nop 
    if (a0 == v0) goto label_0x15ff70;                          // 0x0015ff58: beq $a0, $v0, 0x15ff70
    a1 = 2;                                                     // 0x0015ff5c: addiu $a1, $zero, 2
    a0 = 0x22 << 16;                                            // 0x0015ff60: lui $a0, 0x22
label_0x15ff64:
    func_001634a8();  // 0x163410                                // 0x0015ff64: jal 0x163410
    a0 = &str_00227e20;  // "E1122621: mwPlyGetNumDecPool: handle is invalid." // 0x0015ff68: addiu $a0, $a0, 0x7e20
    a1 = -1;                                                    // 0x0015ff6c: addiu $a1, $zero, -1
label_0x15ff70:
label_0x15ff74:
    return;                                                     // 0x0015ff7c: jr $ra
    sp = sp + 0x20;                                             // 0x0015ff80: addiu $sp, $sp, 0x20
}