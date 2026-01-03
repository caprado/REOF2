void func_00141248() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00141248: addiu $sp, $sp, -0x20
    a2 = 1;                                                     // 0x0014124c: addiu $a2, $zero, 1
    a0 = 1;                                                     // 0x00141260: addiu $a0, $zero, 1
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00141268: lw $v0, 0x10($s0)
    func_00139120();  // 139120                                // 0x00141270: jal 0x139120
    local_0 = v0;                                               // 0x00141274: sw $v0, 0($sp)
    *(uint8_t*)(s0) = 0;                                        // 0x0014127c: sb $zero, 0($s0)
    return;                                                     // 0x00141284: jr $ra
    sp = sp + 0x20;                                             // 0x00141288: addiu $sp, $sp, 0x20
}