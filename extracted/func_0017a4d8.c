void func_0017a4d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0017a4d8: addiu $sp, $sp, -0x10
    return func_0017a6f0();  // Tail call                        // 0x0017a4e4: j 0x17a5d8
    sp = sp + 0x10;                                             // 0x0017a4e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017a4ec: nop 
    sp = sp + -0x40;                                            // 0x0017a4f0: addiu $sp, $sp, -0x40
    a2 = sp + 4;                                                // 0x0017a518: addiu $a2, $sp, 4
    func_0017cf28();  // 0x17cf28                               // 0x0017a520: jal 0x17cf28
    s2 = *(int32_t*)((s0) + 0x48);                              // 0x0017a524: lw $s2, 0x48($s0)
    a1 = local_0;                                               // 0x0017a528: lw $a1, 0($sp)
    s1 = (unsigned)s2 >> 0x1f;                                  // 0x0017a534: srl $s1, $s2, 0x1f
    a1 = a1 << 1;                                               // 0x0017a538: sll $a1, $a1, 1
    func_0017cf18();  // 17cf18                                // 0x0017a53c: jal 0x17cf18
    s1 = s2 + s1;                                               // 0x0017a540: addu $s1, $s2, $s1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017a544: lw $v0, 0x48($s0)
    s1 = s1 >> 1;                                               // 0x0017a548: sra $s1, $s1, 1
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017a550: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017a558: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x0017a55c: sra $v0, $v0, 1
    func_0017d1d8();  // 0x17d1d8                               // 0x0017a560: jal 0x17d1d8
    *(uint32_t*)((s0) + 0x48) = v0;                             // 0x0017a564: sw $v0, 0x48($s0)
    func_0017a5d8();  // 17a5d8                                // 0x0017a570: jal 0x17a5d8
    a1 = local_0;                                               // 0x0017a57c: lw $a1, 0($sp)
    func_0017cf18();  // 17cf18                                // 0x0017a584: jal 0x17cf18
    a1 = a1 << 1;                                               // 0x0017a588: sll $a1, $a1, 1
    func_0017d1d8();  // 0x17d1d8                               // 0x0017a590: jal 0x17d1d8
    func_0017d150();  // 0x17d150                               // 0x0017a59c: jal 0x17d150
    a2 = local_0;                                               // 0x0017a5a8: lw $a2, 0($sp)
    func_0017a5d8();  // 17a5d8                                // 0x0017a5b0: jal 0x17a5d8
    a2 = s4 + a2;                                               // 0x0017a5b4: addu $a2, $s4, $a2
    return;                                                     // 0x0017a5d0: jr $ra
    sp = sp + 0x40;                                             // 0x0017a5d4: addiu $sp, $sp, 0x40
}