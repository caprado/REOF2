void func_001604d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x60;                                            // 0x001604d8: addiu $sp, $sp, -0x60
    func_0015fcb0();  // 0x15fc80                                // 0x001604ec: jal 0x15fc80
    if (v0 != 0) goto label_0x160510;                           // 0x001604f4: bnez $v0, 0x160510
    a0 = 0x23 << 16;                                            // 0x001604fc: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00160500: jal 0x163410
    a0 = &str_00228098;  // "E302251: mwPlySetSpeed: handle is invalid." // 0x00160504: addiu $a0, $a0, -0x7f68
    goto label_0x160560;                                        // 0x00160508: b 0x160560
label_0x160510:
    func_0015f820();  // 0x15f7e0                                // 0x00160510: jal 0x15f7e0
    /* nop */                                                   // 0x00160514: nop 
    func_001754a8();  // 0x1753d0                                // 0x0016051c: jal 0x1753d0
    func_0015f8d8();  // 0x15f870                                // 0x00160524: jal 0x15f870
    func_0015f938();  // 0x15f8d8                                // 0x00160530: jal 0x15f8d8
    *(uint32_t*)(s1) = v0;                                      // 0x00160534: sw $v0, 0($s1)
    func_0015e178();  // 0x15e138                                // 0x0016053c: jal 0x15e138
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00160540: sw $v0, 4($s1)
    func_00160428();  // 0x1603d0                                // 0x00160548: jal 0x1603d0
    *(uint32_t*)((s1) + 8) = v0;                                // 0x0016054c: sw $v0, 8($s1)
    v1 = local_1c;                                              // 0x00160550: lw $v1, 0x1c($sp)
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00160554: sw $v0, 0xc($s1)
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x00160558: sw $v1, 0x10($s1)
label_0x160560:
    return;                                                     // 0x00160568: jr $ra
    sp = sp + 0x60;                                             // 0x0016056c: addiu $sp, $sp, 0x60
}