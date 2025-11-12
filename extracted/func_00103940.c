void func_00103940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00103940: addiu $sp, $sp, -0x10
    func_00107908();  // 0x1071e0                                // 0x0010394c: jal 0x1071e0
    if (s0 == 0) goto label_0x1039e4;                           // 0x00103958: beqz $s0, 0x1039e4
    v1 = -4;                                                    // 0x0010395c: addiu $v1, $zero, -4
    v0 = *(int32_t*)((s0) + -4);                                // 0x00103960: lw $v0, -4($s0)
    v0 = v0 & v1;                                               // 0x00103964: and $v0, $v0, $v1
    a3 = v0 + -4;                                               // 0x00103968: addiu $a3, $v0, -4
    v0 = ((unsigned)a3 < (unsigned)0x25) ? 1 : 0;               // 0x00103970: sltiu $v0, $a3, 0x25
    if (v0 == 0) goto label_0x1039d8;                           // 0x0010397c: beqz $v0, 0x1039d8
    t0 = ((unsigned)a3 < (unsigned)0x14) ? 1 : 0;               // 0x00103980: sltiu $t0, $a3, 0x14
    if (t0 != 0) goto label_0x1039c0;                           // 0x00103984: bnez $t0, 0x1039c0
    v0 = ((unsigned)a3 < (unsigned)0x1c) ? 1 : 0;               // 0x0010398c: sltiu $v0, $a3, 0x1c
    *(uint32_t*)(s0) = 0;                                       // 0x00103990: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00103994: sw $zero, 4($s0)
    if (v0 != 0) goto label_0x1039c0;                           // 0x00103998: bnez $v0, 0x1039c0
    v1 = s0 + 8;                                                // 0x0010399c: addiu $v1, $s0, 8
    v0 = ((unsigned)a3 < (unsigned)0x24) ? 1 : 0;               // 0x001039a0: sltiu $v0, $a3, 0x24
    *(uint32_t*)(v1) = 0;                                       // 0x001039a4: sw $zero, 0($v1)
    v1 = s0 + 0x10;                                             // 0x001039a8: addiu $v1, $s0, 0x10
    if (v0 != 0) goto label_0x1039c0;                           // 0x001039ac: bnez $v0, 0x1039c0
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001039b0: sw $zero, 0xc($s0)
    *(uint32_t*)(v1) = 0;                                       // 0x001039b4: sw $zero, 0($v1)
    v1 = s0 + 0x18;                                             // 0x001039b8: addiu $v1, $s0, 0x18
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001039bc: sw $zero, 0x14($s0)
label_0x1039c0:
    *(uint32_t*)(v1) = 0;                                       // 0x001039c0: sw $zero, 0($v1)
    v1 = v1 + 4;                                                // 0x001039c4: addiu $v1, $v1, 4
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x001039c8: sw $zero, 4($v1)
    goto label_0x1039e0;                                        // 0x001039cc: b 0x1039e0
    *(uint32_t*)(v1) = 0;                                       // 0x001039d0: sw $zero, 0($v1)
    /* nop */                                                   // 0x001039d4: nop 
label_0x1039d8:
    func_00107d30();  // 0x107c70                                // 0x001039d8: jal 0x107c70
    /* nop */                                                   // 0x001039dc: nop 
label_0x1039e0:
label_0x1039e4:
    return;                                                     // 0x001039ec: jr $ra
    sp = sp + 0x10;                                             // 0x001039f0: addiu $sp, $sp, 0x10
}