void func_00173460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00173460: addiu $sp, $sp, -0x10
    a2 = 0x10;                                                  // 0x00173468: addiu $a2, $zero, 0x10
    func_00156058();  // 0x155f90                                // 0x00173474: jal 0x155f90
    v1 = -1;                                                    // 0x0017347c: addiu $v1, $zero, -1
    v0 = 1;                                                     // 0x00173480: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x00173484: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00173488: sw $v0, 0x1c($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x0017348c: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00173490: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00173494: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x00173498: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x0017349c: sw $zero, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001734a0: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x001734a4: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001734a8: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = v1;                             // 0x001734ac: sw $v1, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = v1;                             // 0x001734b0: sw $v1, 0x28($s0)
    return;                                                     // 0x001734bc: jr $ra
    sp = sp + 0x10;                                             // 0x001734c0: addiu $sp, $sp, 0x10
}