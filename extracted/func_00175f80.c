void func_00175f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175f80: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00175f9c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00175fa4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175fd8;                           // 0x00175fb0: beqz $v0, 0x175fd8
    a1 = a1 | 0x127;                                            // 0x00175fb4: ori $a1, $a1, 0x127
    return func_00169940();  // Tail call                        // 0x00175fcc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00175fd0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00175fd4: nop 
label_0x175fd8:
    goto label_0x175ff8;                                        // 0x00175fec: j 0x175ff8
    sp = sp + 0x20;                                             // 0x00175ff0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00175ff4: nop 
label_0x175ff8:
    sp = sp + -0x10;                                            // 0x00175ff8: addiu $sp, $sp, -0x10
    goto label_0x176010;                                        // 0x00176004: j 0x176010
    sp = sp + 0x10;                                             // 0x00176008: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017600c: nop 
label_0x176010:
    sp = sp + -0x10;                                            // 0x00176010: addiu $sp, $sp, -0x10
    t1 = a0 + 0xcc0;                                            // 0x00176014: addiu $t1, $a0, 0xcc0
    v0 = -5;                                                    // 0x0017601c: addiu $v0, $zero, -5
    v1 = *(int32_t*)((t1) + 0x248);                             // 0x00176024: lw $v1, 0x248($t1)
    if (v1 != v0) goto label_0x176040;                          // 0x00176028: bne $v1, $v0, 0x176040
    return func_00176170();  // Tail call                        // 0x00176034: j 0x1760d8
    sp = sp + 0x10;                                             // 0x00176038: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017603c: nop 
label_0x176040:
    *(uint32_t*)(a3) = v1;                                      // 0x00176040: sw $v1, 0($a3)
    v1 = *(int32_t*)((t1) + 0x24c);                             // 0x0017604c: lw $v1, 0x24c($t1)
    *(uint32_t*)(t0) = v1;                                      // 0x00176050: sw $v1, 0($t0)
    return;                                                     // 0x00176054: jr $ra
    sp = sp + 0x10;                                             // 0x00176058: addiu $sp, $sp, 0x10
}