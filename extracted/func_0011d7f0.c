void func_0011d7f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x0011d7f0: addiu $sp, $sp, -0x80
    v0 = 0x1f << 16;                                            // 0x0011d7f4: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0011d7fc: lui $v1, 0x1f
    s3 = g_001f0780;  // Global at 0x001f0780                   // 0x0011d800: lw $s3, 0x780($v0)
    a3 = v1 + 0x1238;                                           // 0x0011d804: addiu $a3, $v1, 0x1238
    v0 = s3 + 0x40;                                             // 0x0011d810: addiu $v0, $s3, 0x40
    a0 = g_001f1238;  // Global at 0x001f1238                   // 0x0011d834: lw $a0, 0x1238($v1)
    a1 = g_001f123c;  // Global at 0x001f123c                   // 0x0011d838: lw $a1, 4($a3)
    func_0011d7e0();  // 11d7e0                                // 0x0011d83c: jal 0x11d7e0
    local_0 = v0;                                               // 0x0011d840: sw $v0, 0($sp)
    v1 = (s2 < 0x10) ? 1 : 0;                                   // 0x0011d844: slti $v1, $s2, 0x10
    v0 = 0xf;                                                   // 0x0011d848: addiu $v0, $zero, 0xf
    if (v1 == 0) s2 = v0;                                       // 0x0011d850: movz $s2, $v0, $v1
    SetSyscall();  // 0x11d7a0                                  // 0x0011d858: jal 0x11d7a0
    a2 = 4;                                                     // 0x0011d85c: addiu $a2, $zero, 4
    s3 = s3 + 4;                                                // 0x0011d860: addiu $s3, $s3, 4
    func_0010ae00();  // 10ae00                                // 0x0011d864: jal 0x10ae00
    s1 = v0 + 1;                                                // 0x0011d86c: addiu $s1, $v0, 1
    a0 = local_0;                                               // 0x0011d870: lw $a0, 0($sp)
    SetSyscall();  // 0x11d7a0                                  // 0x0011d878: jal 0x11d7a0
    v1 = local_0;                                               // 0x0011d880: lw $v1, 0($sp)
    v1 = v1 + s1;                                               // 0x0011d884: addu $v1, $v1, $s1
    if (s2 <= 0) goto label_0x11d8e0;                           // 0x0011d888: blez $s2, 0x11d8e0
    local_0 = v1;                                               // 0x0011d88c: sw $v1, 0($sp)
    /* nop */                                                   // 0x0011d894: nop 
label_0x11d898:
    a2 = 4;                                                     // 0x0011d8a0: addiu $a2, $zero, 4
    SetSyscall();  // 0x11d7a0                                  // 0x0011d8a4: jal 0x11d7a0
    s3 = s3 + 4;                                                // 0x0011d8a8: addiu $s3, $s3, 4
    s2 = s2 + -1;                                               // 0x0011d8ac: addiu $s2, $s2, -1
    func_0010ae00();  // 10ae00                                // 0x0011d8b0: jal 0x10ae00
    a0 = *(int32_t*)(s0);                                       // 0x0011d8b4: lw $a0, 0($s0)
    s1 = v0 + 1;                                                // 0x0011d8b8: addiu $s1, $v0, 1
    a1 = *(int32_t*)(s0);                                       // 0x0011d8bc: lw $a1, 0($s0)
    a0 = local_0;                                               // 0x0011d8c0: lw $a0, 0($sp)
    SetSyscall();  // 0x11d7a0                                  // 0x0011d8c8: jal 0x11d7a0
    s0 = s0 + 4;                                                // 0x0011d8cc: addiu $s0, $s0, 4
    v1 = local_0;                                               // 0x0011d8d0: lw $v1, 0($sp)
    v1 = v1 + s1;                                               // 0x0011d8d4: addu $v1, $v1, $s1
    if (s2 != 0) goto label_0x11d898;                           // 0x0011d8d8: bnez $s2, 0x11d898
    local_0 = v1;                                               // 0x0011d8dc: sw $v1, 0($sp)
label_0x11d8e0:
    return;                                                     // 0x0011d900: jr $ra
    sp = sp + 0x80;                                             // 0x0011d904: addiu $sp, $sp, 0x80
}