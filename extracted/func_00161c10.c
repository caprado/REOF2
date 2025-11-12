void func_00161c10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00161c10: addiu $sp, $sp, -0xb0
    func_0015fcb0();  // 0x15fc80                                // 0x00161c28: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x00161c30: lui $a0, 0x23
    if (v0 != 0) goto label_0x161c50;                           // 0x00161c34: bnez $v0, 0x161c50
    a0 = &str_00228788;  // "E202284: MWSFD_MakeTblZ16: getfrm is failed." // 0x00161c38: addiu $a0, $a0, -0x7878
    func_001634a8();  // 0x163410                                // 0x00161c3c: jal 0x163410
    /* nop */                                                   // 0x00161c40: nop 
    goto label_0x161c9c;                                        // 0x00161c44: b 0x161c9c
    /* nop */                                                   // 0x00161c4c: nop 
label_0x161c50:
    v0 = *(int32_t*)(s2);                                       // 0x00161c50: lw $v0, 0($s2)
    if (v0 != 0) goto label_0x161c70;                           // 0x00161c54: bnez $v0, 0x161c70
    /* nop */                                                   // 0x00161c58: nop 
    a0 = 0x23 << 16;                                            // 0x00161c5c: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00161c60: jal 0x163410
    a0 = &str_002287b8;  // "E202285: MWSFD_MakeTblZ32: handle is invalid." // 0x00161c64: addiu $a0, $a0, -0x7848
    goto label_0x161c9c;                                        // 0x00161c68: b 0x161c9c
label_0x161c70:
    func_00160860();  // 0x160850                                // 0x00161c70: jal 0x160850
    func_001608f0();  // 0x160878                                // 0x00161c84: jal 0x160878
    func_0017c668();  // 0x17c600                                // 0x00161c90: jal 0x17c600
label_0x161c9c:
    return;                                                     // 0x00161ca8: jr $ra
    sp = sp + 0xb0;                                             // 0x00161cac: addiu $sp, $sp, 0xb0
}