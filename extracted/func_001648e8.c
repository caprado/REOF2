void func_001648e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x001648e8: addiu $sp, $sp, -0x50
    s1 = *(int32_t*)((a0) + 0x1b74);                            // 0x00164918: lw $s1, 0x1b74($a0)
    s3 = *(int32_t*)((s1) + 4);                                 // 0x0016491c: lw $s3, 4($s1)
    a1 = *(int32_t*)((s1) + 8);                                 // 0x00164920: lw $a1, 8($s1)
    func_00164830();  // 164830                                // 0x00164924: jal 0x164830
    a2 = 1 << 16;                                               // 0x0016492c: lui $a2, 1
    s0 = local_4;                                               // 0x00164930: lw $s0, 4($sp)
    a2 = a2 | 0x9000;                                           // 0x00164934: ori $a2, $a2, 0x9000
    a0 = local_0;                                               // 0x00164938: lw $a0, 0($sp)
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x00164940: slt $v0, $s2, $s0
    if (v0 != 0) s0 = s2;                                       // 0x00164944: movn $s0, $s2, $v0
    v1 = (a2 < s0) ? 1 : 0;                                     // 0x00164948: slt $v1, $a2, $s0
    if (v1 != 0) s0 = a2;                                       // 0x0016494c: movn $s0, $a2, $v1
    func_00155b20();  // 155b20                                // 0x00164950: jal 0x155b20
    func_00164860();  // 164860                                // 0x00164960: jal 0x164860
    v0 = *(int32_t*)((s1) + 0x48);                              // 0x00164968: lw $v0, 0x48($s1)
    v0 = v0 + s0;                                               // 0x00164970: addu $v0, $v0, $s0
    *(uint32_t*)((s1) + 0x48) = v0;                             // 0x00164978: sw $v0, 0x48($s1)
    *(uint32_t*)(s5) = s0;                                      // 0x00164980: sw $s0, 0($s5)
    return;                                                     // 0x00164994: jr $ra
    sp = sp + 0x50;                                             // 0x00164998: addiu $sp, $sp, 0x50
}