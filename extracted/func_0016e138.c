void func_0016e138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)(a2);                                       // 0x0016e138: lw $v1, 0($a2)
    t0 = *(int32_t*)((a2) + 0x10);                              // 0x0016e13c: lw $t0, 0x10($a2)
    *(uint32_t*)(a0) = v1;                                      // 0x0016e140: sw $v1, 0($a0)
    v0 = *(int32_t*)((a2) + 4);                                 // 0x0016e144: lw $v0, 4($a2)
    *(uint32_t*)((a0) + 4) = v0;                                // 0x0016e148: sw $v0, 4($a0)
    v1 = *(int32_t*)((a2) + 8);                                 // 0x0016e14c: lw $v1, 8($a2)
    *(uint32_t*)((a0) + 8) = v1;                                // 0x0016e150: sw $v1, 8($a0)
    v0 = *(int32_t*)((a2) + 0xc);                               // 0x0016e154: lw $v0, 0xc($a2)
    *(uint32_t*)((a0) + 0x20) = a3;                             // 0x0016e158: sw $a3, 0x20($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0016e15c: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 0x14) = t0;                             // 0x0016e160: sw $t0, 0x14($a0)
    return;                                                     // 0x0016e164: jr $ra
    *(uint32_t*)((a0) + 0x10) = a1;                             // 0x0016e168: sw $a1, 0x10($a0)
}