void func_00160950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x00160950: addiu $sp, $sp, -0x40
    v1 = 3;                                                     // 0x00160964: addiu $v1, $zero, 3
    a0 = s0 + 4;                                                // 0x0016096c: addiu $a0, $s0, 4
    s1 = *(int32_t*)((t0) + 0xc);                               // 0x00160970: lw $s1, 0xc($t0)
    t1 = *(int32_t*)((t0) + 8);                                 // 0x00160974: lw $t1, 8($t0)
    v0 = *(int32_t*)((t0) + 4);                                 // 0x00160978: lw $v0, 4($t0)
    *(uint32_t*)((s0) + 0x44) = t1;                             // 0x00160988: sw $t1, 0x44($s0)
    if (v0 == v1) goto label_0x1609a8;                          // 0x0016098c: beq $v0, $v1, 0x1609a8
    *(uint32_t*)((s0) + 0x48) = s1;                             // 0x00160990: sw $s1, 0x48($s0)
    a1 = *(int32_t*)(t0);                                       // 0x00160994: lw $a1, 0($t0)
    func_00160a18();  // 160a18                                // 0x00160998: jal 0x160a18
    goto label_0x1609f4;                                        // 0x001609a0: b 0x1609f4
label_0x1609a8:
    a0 = *(int32_t*)(t0);                                       // 0x001609a8: lw $a0, 0($t0)
    func_0015de30();  // 15de30                                // 0x001609ac: jal 0x15de30
    a0 = s0 + 4;                                                // 0x001609b4: addiu $a0, $s0, 4
    a1 = local_0;                                               // 0x001609b8: lw $a1, 0($sp)
    func_00160a18();  // 160a18                                // 0x001609c0: jal 0x160a18
    a2 = local_c;                                               // 0x001609c4: lw $a2, 0xc($sp)
    a0 = s0 + 0x14;                                             // 0x001609c8: addiu $a0, $s0, 0x14
    a1 = local_4;                                               // 0x001609cc: lw $a1, 4($sp)
    func_00160a18();  // 160a18                                // 0x001609d4: jal 0x160a18
    a2 = local_10;                                              // 0x001609d8: lw $a2, 0x10($sp)
    a0 = s0 + 0x24;                                             // 0x001609dc: addiu $a0, $s0, 0x24
    a1 = local_8;                                               // 0x001609e0: lw $a1, 8($sp)
    func_00160a18();  // 160a18                                // 0x001609e8: jal 0x160a18
    a2 = local_14;                                              // 0x001609ec: lw $a2, 0x14($sp)
label_0x1609f4:
    return;                                                     // 0x001609fc: jr $ra
    sp = sp + 0x40;                                             // 0x00160a00: addiu $sp, $sp, 0x40
}