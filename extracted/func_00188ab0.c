void func_00188ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00188ab0: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x00188ab4: lui $v0, 0x28
    a1 = 0x8000 << 16;                                          // 0x00188abc: lui $a1, 0x8000
    s0 = 0x28 << 16;                                            // 0x00188ac0: lui $s0, 0x28
    a3 = s0 + 0x12c0;                                           // 0x00188ac8: addiu $a3, $s0, 0x12c0
    a1 = a1 | 0x1304;                                           // 0x00188acc: ori $a1, $a1, 0x1304
    g_002812c4 = a0;  // Global at 0x002812c4                   // 0x00188ad0: sw $a0, 4($a3)
    a0 = v0 + 0x1248;                                           // 0x00188ad8: addiu $a0, $v0, 0x1248
    local_0 = 0;                                                // 0x00188adc: sw $zero, 0($sp)
    t0 = 0x280;                                                 // 0x00188ae0: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188ae8: addiu $t2, $zero, 0x280
    func_001178a0();  // 0x1176a8                                // 0x00188aec: jal 0x1176a8
    if (v0 >= 0) goto label_0x188b0c;                           // 0x00188af4: bgez $v0, 0x188b0c
    v0 = g_002812c0;  // Global at 0x002812c0                   // 0x00188af8: lw $v0, 0x12c0($s0)
    a0 = 0x23 << 16;                                            // 0x00188afc: lui $a0, 0x23
    func_001896f0();  // 0x1896c8                                // 0x00188b00: jal 0x1896c8
    a0 = &str_0022a0c8;  // "sceDbcCreateSocket: rpc error\n"   // 0x00188b04: addiu $a0, $a0, -0x5f38
label_0x188b0c:
    return;                                                     // 0x00188b14: jr $ra
    sp = sp + 0x30;                                             // 0x00188b18: addiu $sp, $sp, 0x30
}