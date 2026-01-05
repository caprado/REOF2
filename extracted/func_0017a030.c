void func_0017a030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017a030: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x0017a038: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x0017a04c: jal 0x179a18
    if (s1 == 0) goto label_0x17a090;                           // 0x0017a05c: beqz $s1, 0x17a090
    func_0017a258();  // 17a258                                // 0x0017a064: jal 0x17a258
    /* nop */                                                   // 0x0017a068: nop 
    if (v0 == 0) goto label_0x17a094;                           // 0x0017a06c: beqz $v0, 0x17a094
    v0 = *(uint8_t*)((s1) + 0x25);                              // 0x0017a074: lbu $v0, 0x25($s1)
    v1 = (v0 < 0x40) ? 1 : 0;                                   // 0x0017a078: slti $v1, $v0, 0x40
    if (v1 != 0) goto label_0x17a08c;                           // 0x0017a07c: bnez $v1, 0x17a08c
    *(uint32_t*)(s2) = v0;                                      // 0x0017a080: sw $v0, 0($s2)
    v0 = -1;                                                    // 0x0017a084: addiu $v0, $zero, -1
    *(uint32_t*)(s2) = v0;                                      // 0x0017a088: sw $v0, 0($s2)
label_0x17a08c:
    v0 = 1;                                                     // 0x0017a08c: addiu $v0, $zero, 1
label_0x17a090:
label_0x17a094:
    return;                                                     // 0x0017a0a0: jr $ra
    sp = sp + 0x20;                                             // 0x0017a0a4: addiu $sp, $sp, 0x20
}