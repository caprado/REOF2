void func_00105308() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x11 << 16;                                            // 0x00105308: lui $v0, 0x11
    v1 = 0x11 << 16;                                            // 0x0010530c: lui $v1, 0x11
    t0 = 0x11 << 16;                                            // 0x00105310: lui $t0, 0x11
    t1 = 0x11 << 16;                                            // 0x00105314: lui $t1, 0x11
    v0 = v0 + -0x59e8;                                          // 0x00105318: addiu $v0, $v0, -0x59e8
    v1 = v1 + -0x5980;                                          // 0x0010531c: addiu $v1, $v1, -0x5980
    t0 = t0 + -0x5900;                                          // 0x00105320: addiu $t0, $t0, -0x5900
    t1 = t1 + -0x5898;                                          // 0x00105324: addiu $t1, $t1, -0x5898
    *(uint32_t*)((a0) + 0x54) = a3;                             // 0x00105328: sw $a3, 0x54($a0)
    *(uint16_t*)((a0) + 0xc) = a1;                              // 0x0010532c: sh $a1, 0xc($a0)
    *(uint16_t*)((a0) + 0xe) = a2;                              // 0x00105330: sh $a2, 0xe($a0)
    *(uint32_t*)((a0) + 0x20) = v0;                             // 0x00105334: sw $v0, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = v1;                             // 0x00105338: sw $v1, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = t0;                             // 0x0010533c: sw $t0, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = t1;                             // 0x00105340: sw $t1, 0x2c($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00105344: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00105348: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0010534c: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x00105350: sw $zero, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x00105354: sw $zero, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x00105358: sw $zero, 0x18($a0)
    return;                                                     // 0x0010535c: jr $ra
    *(uint32_t*)((a0) + 0x1c) = a0;                             // 0x00105360: sw $a0, 0x1c($a0)
}