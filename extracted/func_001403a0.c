void func_001403a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x20;                                            // 0x001403a0: addiu $sp, $sp, -0x20
    v0 = v0 + t0;                                               // 0x001403ac: addu $v0, $v0, $t0
    if (a1 != 0) goto label_0x1403d8;                           // 0x001403b0: bnez $a1, 0x1403d8
    *(uint32_t*)(a3) = 0;                                       // 0x001403b4: sw $zero, 0($a3)
    v0 = *(int32_t*)((t0) + 0x28);                              // 0x001403b8: lw $v0, 0x28($t0)
    /* beqzl $v0, 0x140418 */                                   // 0x001403bc: beqzl $v0, 0x140418
    a0 = *(int32_t*)((t0) + 0x2c);                              // 0x001403c4: lw $a0, 0x2c($t0)
    /* call function at address in v0 */                        // 0x001403c8: jalr $v0
    a1 = -3;                                                    // 0x001403cc: addiu $a1, $zero, -3
    goto label_0x140418;                                        // 0x001403d0: b 0x140418
label_0x1403d8:
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x001403d8: lw $v1, 0x18($v0)
    if (v1 == 0) goto label_0x140418;                           // 0x001403dc: beqz $v1, 0x140418
    a0 = 1;                                                     // 0x001403f4: addiu $a0, $zero, 1
    v1 = local_4;                                               // 0x001403f8: lw $v1, 4($sp)
    *(uint32_t*)(a3) = v1;                                      // 0x001403fc: sw $v1, 0($a3)
    v0 = (v1 < a2) ? 1 : 0;                                     // 0x00140400: slt $v0, $v1, $a2
    a2 = v1 ^ a2;                                               // 0x00140404: xor $a2, $v1, $a2
    v1 = *(int8_t*)((t0) + 5);                                  // 0x00140408: lb $v1, 5($t0)
    if (v1 == a0) goto label_0x140418;                          // 0x0014040c: beq $v1, $a0, 0x140418
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00140410: sltiu $v0, $v0, 1
    v0 = ((unsigned)a2 < (unsigned)1) ? 1 : 0;                  // 0x00140414: sltiu $v0, $a2, 1
label_0x140418:
    return;                                                     // 0x0014041c: jr $ra
    sp = sp + 0x20;                                             // 0x00140420: addiu $sp, $sp, 0x20
}