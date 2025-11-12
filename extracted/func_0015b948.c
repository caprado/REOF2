void func_0015b948() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = *(int32_t*)((a0) + 8);                                 // 0x0015b948: lw $t2, 8($a0)
    t3 = *(int32_t*)((a0) + 0xc);                               // 0x0015b94c: lw $t3, 0xc($a0)
    v1 = (unsigned)t2 >> 0x1f;                                  // 0x0015b950: srl $v1, $t2, 0x1f
    v1 = t2 + v1;                                               // 0x0015b954: addu $v1, $t2, $v1
    a0 = (unsigned)t3 >> 0x1f;                                  // 0x0015b958: srl $a0, $t3, 0x1f
    v1 = v1 >> 1;                                               // 0x0015b95c: sra $v1, $v1, 1
    a0 = t3 + a0;                                               // 0x0015b960: addu $a0, $t3, $a0
    v0 = v1 + 0x1f;                                             // 0x0015b964: addiu $v0, $v1, 0x1f
    v1 = v1 + 0x3e;                                             // 0x0015b968: addiu $v1, $v1, 0x3e
    t1 = (v0 < 0) ? 1 : 0;                                      // 0x0015b96c: slti $t1, $v0, 0
    a0 = a0 >> 1;                                               // 0x0015b970: sra $a0, $a0, 1
    if (t1 != 0) v0 = v1;                                       // 0x0015b974: movn $v0, $v1, $t1
    v0 = v0 >> 5;                                               // 0x0015b978: sra $v0, $v0, 5
    v0 = v0 << 5;                                               // 0x0015b97c: sll $v0, $v0, 5
    *(uint32_t*)(a3) = v0;                                      // 0x0015b980: sw $v0, 0($a3)
    *(uint32_t*)(t0) = a0;                                      // 0x0015b984: sw $a0, 0($t0)
    *(uint32_t*)(a1) = t2;                                      // 0x0015b988: sw $t2, 0($a1)
    return;                                                     // 0x0015b98c: jr $ra
    *(uint32_t*)(a2) = t3;                                      // 0x0015b990: sw $t3, 0($a2)
}