void func_00161cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00161cb0: addiu $sp, $sp, -0xb0
    func_0015fc80();  // 15fc80                                // 0x00161cc8: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x00161cd0: lui $a0, 0x23
    if (v0 != 0) goto label_0x161cf0;                           // 0x00161cd4: bnez $v0, 0x161cf0
    a0 = &str_002287e8;  // "E202286: MWSFD_MakeTblZ32: getfrm is failed." // 0x00161cd8: addiu $a0, $a0, -0x7818
    func_00163410();  // 163410                                // 0x00161cdc: jal 0x163410
    /* nop */                                                   // 0x00161ce0: nop 
    goto label_0x161d3c;                                        // 0x00161ce4: b 0x161d3c
    /* nop */                                                   // 0x00161cec: nop 
label_0x161cf0:
    v0 = *(int32_t*)(s2);                                       // 0x00161cf0: lw $v0, 0($s2)
    if (v0 != 0) goto label_0x161d10;                           // 0x00161cf4: bnez $v0, 0x161d10
    /* nop */                                                   // 0x00161cf8: nop 
    a0 = 0x23 << 16;                                            // 0x00161cfc: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00161d00: jal 0x163410
    a0 = &str_00228818;  // "E306165: MWSFD_CnvFrmClipARGB8888: handle is invalid." // 0x00161d04: addiu $a0, $a0, -0x77e8
    goto label_0x161d3c;                                        // 0x00161d08: b 0x161d3c
label_0x161d10:
    func_00160850();  // 160850                                // 0x00161d10: jal 0x160850
    func_00160878();  // 160878                                // 0x00161d24: jal 0x160878
    func_0017c668();  // 17c668                                // 0x00161d30: jal 0x17c668
label_0x161d3c:
    return;                                                     // 0x00161d48: jr $ra
    sp = sp + 0xb0;                                             // 0x00161d4c: addiu $sp, $sp, 0xb0
}