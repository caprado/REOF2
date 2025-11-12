void func_00161698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 + 0x100;                                            // 0x00161698: addiu $v0, $a0, 0x100
    v1 = -1;                                                    // 0x0016169c: addiu $v1, $zero, -1
    *(uint32_t*)((v0) + 8) = 0;                                 // 0x001616a0: sw $zero, 8($v0)
    *(uint32_t*)(v0) = 0;                                       // 0x001616a4: sw $zero, 0($v0)
    *(uint32_t*)((v0) + 4) = 0;                                 // 0x001616a8: sw $zero, 4($v0)
    return;                                                     // 0x001616ac: jr $ra
    *(uint32_t*)((a0) + 0xfc) = v1;                             // 0x001616b0: sw $v1, 0xfc($a0)
}