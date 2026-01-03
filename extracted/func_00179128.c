void func_00179128() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179128: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179134: andi $s0, $a1, 0xff
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x0017914c: lw $v1, 0xc($s1)
    v1 = (v1 < 0x6e) ? 1 : 0;                                   // 0x00179150: slti $v1, $v1, 0x6e
    if (v1 != 0) goto label_0x1791e0;                           // 0x00179154: bnez $v1, 0x1791e0
    func_0017a298();  // 17a298                                // 0x0017915c: jal 0x17a298
    /* nop */                                                   // 0x00179160: nop 
    a2 = 0xe0;                                                  // 0x00179164: addiu $a2, $zero, 0xe0
    v0 = 0xc0;                                                  // 0x0017916c: addiu $v0, $zero, 0xc0
    if (v1 == v0) goto label_0x179190;                          // 0x00179174: beq $v1, $v0, 0x179190
    if (v1 == a2) goto label_0x1791b8;                          // 0x0017917c: beq $v1, $a2, 0x1791b8
    goto label_0x1791e4;                                        // 0x00179184: b 0x1791e4
    /* nop */                                                   // 0x0017918c: nop 
label_0x179190:
    func_00179a18();  // 179a18                                // 0x00179190: jal 0x179a18
    /* nop */                                                   // 0x00179194: nop 
    if (v1 == 0) goto label_0x1791e0;                           // 0x001791a0: beqz $v1, 0x1791e0
    func_0017a218();  // 17a218                                // 0x001791a8: jal 0x17a218
    /* nop */                                                   // 0x001791ac: nop 
    goto label_0x1791dc;                                        // 0x001791b0: b 0x1791dc
    *(uint32_t*)(s2) = v0;                                      // 0x001791b4: sw $v0, 0($s2)
label_0x1791b8:
    func_00179a18();  // 179a18                                // 0x001791b8: jal 0x179a18
    if (v1 == 0) goto label_0x1791e0;                           // 0x001791c8: beqz $v1, 0x1791e0
    func_0017a258();  // 17a258                                // 0x001791d0: jal 0x17a258
    /* nop */                                                   // 0x001791d4: nop 
    *(uint32_t*)(s2) = v0;                                      // 0x001791d8: sw $v0, 0($s2)
label_0x1791dc:
    v0 = 1;                                                     // 0x001791dc: addiu $v0, $zero, 1
label_0x1791e0:
label_0x1791e4:
    return;                                                     // 0x001791f0: jr $ra
    sp = sp + 0x20;                                             // 0x001791f4: addiu $sp, $sp, 0x20
}