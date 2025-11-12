void func_00166c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x10;                                            // 0x00166c90: addiu $sp, $sp, -0x10
    goto label_0x166cc0;                                        // 0x00166ca0: j 0x166cc0
    sp = sp + 0x10;                                             // 0x00166ca4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00166ca8: addiu $sp, $sp, -0x10
    a3 = 1;                                                     // 0x00166cac: addiu $a3, $zero, 1
    goto label_0x166cc0;                                        // 0x00166cb8: j 0x166cc0
    sp = sp + 0x10;                                             // 0x00166cbc: addiu $sp, $sp, 0x10
label_0x166cc0:
    v0 = a1 << 3;                                               // 0x00166cc0: sll $v0, $a1, 3
    sp = sp + -0x50;                                            // 0x00166cc4: addiu $sp, $sp, -0x50
    v0 = v0 - a1;                                               // 0x00166cc8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166cd0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00166cd8: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166ce4: sll $v0, $v0, 2
    a0 = a0 + 0x1140;                                           // 0x00166cec: addiu $a0, $a0, 0x1140
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00166cf0: sw $zero, 4($s0)
    a0 = a0 + v0;                                               // 0x00166cf4: addu $a0, $a0, $v0
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x00166cf8: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00166d00: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00166d04: sw $zero, 0x18($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x00166d08: sw $zero, 0($s0)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00166d0c: lw $v0, 4($a0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00166d10: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x00166d14: sw $zero, 0x10($s0)
    if (v0 == 0) goto label_0x166d6c;                           // 0x00166d18: beqz $v0, 0x166d6c
    s1 = *(int32_t*)((a0) + 0x14);                              // 0x00166d1c: lw $s1, 0x14($a0)
    /* beqzl $s1, 0x166d70 */                                   // 0x00166d20: beqzl $s1, 0x166d70
    func_00169ba0();  // 0x169b88                                // 0x00166d28: jal 0x169b88
    a0 = sp + 0x20;                                             // 0x00166d2c: addiu $a0, $sp, 0x20
    func_00167098();  // 0x166fa0                                // 0x00166d3c: jal 0x166fa0
    a3 = sp + 0x10;                                             // 0x00166d40: addiu $a3, $sp, 0x10
    v0 = local_14;                                              // 0x00166d44: lw $v0, 0x14($sp)
    a0 = sp + 0x20;                                             // 0x00166d48: addiu $a0, $sp, 0x20
    v1 = local_0;                                               // 0x00166d4c: lw $v1, 0($sp)
    a1 = local_4;                                               // 0x00166d50: lw $a1, 4($sp)
    a2 = local_10;                                              // 0x00166d54: lw $a2, 0x10($sp)
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00166d58: sw $v0, 0xc($s0)
    *(uint32_t*)(s0) = v1;                                      // 0x00166d5c: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = a1;                                // 0x00166d60: sw $a1, 4($s0)
    func_00169bc8();  // 0x169ba0                                // 0x00166d64: jal 0x169ba0
    *(uint32_t*)((s0) + 8) = a2;                                // 0x00166d68: sw $a2, 8($s0)
label_0x166d6c:
    return;                                                     // 0x00166d80: jr $ra
    sp = sp + 0x50;                                             // 0x00166d84: addiu $sp, $sp, 0x50
}