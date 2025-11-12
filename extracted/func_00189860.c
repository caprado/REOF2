void func_00189860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a3 + -1;                                               // 0x00189860: addiu $v0, $a3, -1
    *(uint32_t*)(a0) = a1;                                      // 0x00189864: sw $a1, 0($a0)
    v1 = ~v0;                                                   // 0x00189868: not $v1, $v0
    *(uint32_t*)((a0) + 0x14) = a3;                             // 0x0018986c: sw $a3, 0x14($a0)
    v0 = a2 + a3;                                               // 0x00189870: addu $v0, $a2, $a3
    a1 = *(int32_t*)(a0);                                       // 0x00189874: lw $a1, 0($a0)
    a3 = *(int32_t*)((a0) + 0x14);                              // 0x00189878: lw $a3, 0x14($a0)
    v0 = v0 + -1;                                               // 0x0018987c: addiu $v0, $v0, -1
    a2 = v1 & v0;                                               // 0x00189880: and $a2, $v1, $v0
    v0 = 1;                                                     // 0x00189884: addiu $v0, $zero, 1
    v1 = a3 + -1;                                               // 0x00189888: addiu $v1, $a3, -1
    a1 = a1 + a3;                                               // 0x0018988c: addu $a1, $a1, $a3
    v1 = ~v1;                                                   // 0x00189890: not $v1, $v1
    a1 = a1 + -1;                                               // 0x00189894: addiu $a1, $a1, -1
    v1 = v1 & a1;                                               // 0x00189898: and $v1, $v1, $a1
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0018989c: sw $v1, 4($a0)
    a1 = *(int32_t*)(a0);                                       // 0x001898a0: lw $a1, 0($a0)
    a3 = *(int32_t*)((a0) + 0x14);                              // 0x001898a4: lw $a3, 0x14($a0)
    a1 = a1 + a2;                                               // 0x001898a8: addu $a1, $a1, $a2
    v1 = a3 + -1;                                               // 0x001898ac: addiu $v1, $a3, -1
    a1 = a3 + a1;                                               // 0x001898b0: addu $a1, $a3, $a1
    v1 = ~v1;                                                   // 0x001898b4: not $v1, $v1
    a1 = a1 + -1;                                               // 0x001898b8: addiu $a1, $a1, -1
    v1 = v1 & a1;                                               // 0x001898bc: and $v1, $v1, $a1
    *(uint32_t*)((a0) + 8) = v1;                                // 0x001898c0: sw $v1, 8($a0)
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001898c4: lw $v1, 4($a0)
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x001898c8: sw $v1, 0xc($a0)
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001898cc: lw $v1, 8($a0)
    return;                                                     // 0x001898d0: jr $ra
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x001898d4: sw $v1, 0x10($a0)
}